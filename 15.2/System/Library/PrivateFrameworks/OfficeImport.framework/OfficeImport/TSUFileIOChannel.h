@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_io;

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel> {
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_io> *_channel;
    BOOL _isClosed;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)flushWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)readWithHandler:(id /* block */)a0;
- (void)addBarrier:(id /* block */)a0;
- (void)writeData:(id)a0 offset:(long long)a1 handler:(id /* block */)a2;
- (void)readFromOffset:(long long)a0 length:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)initForStreamWritingURL:(id)a0 error:(id *)a1;
- (void)writeData:(id)a0 handler:(id /* block */)a1;
- (id)initForReadingDescriptor:(int)a0 queue:(id)a1 cleanupHandler:(id /* block */)a2;
- (id)initForRandomWritingURL:(id)a0 error:(id *)a1 cleanupHandler:(id /* block */)a2;
- (void)setLowWater:(unsigned long long)a0;
- (id)initForRandomReadingWritingURL:(id)a0 error:(id *)a1 cleanupHandler:(id /* block */)a2;
- (void)truncateToLength:(long long)a0 completion:(id /* block */)a1;
- (id)initForReadingURL:(id)a0 error:(id *)a1;
- (id)initForReadingURL:(id)a0 error:(id *)a1 cleanupHandler:(id /* block */)a2;
- (id)initWithType:(unsigned long long)a0 URL:(id)a1 oflag:(int)a2 mode:(unsigned short)a3 error:(id *)a4 cleanupHandler:(id /* block */)a5;
- (id)initWithType:(unsigned long long)a0 descriptor:(int)a1 queue:(id)a2 cleanupHandler:(id /* block */)a3;
- (id)initForStreamWritingURL:(id)a0 error:(id *)a1 cleanupHandler:(id /* block */)a2;
- (id)initForRandomWritingURL:(id)a0 error:(id *)a1;
- (id)initForRandomReadingWritingURL:(id)a0 error:(id *)a1;

@end
