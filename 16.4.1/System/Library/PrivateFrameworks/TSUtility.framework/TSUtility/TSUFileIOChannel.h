@class NSString, NSObject;
@protocol OS_dispatch_io;

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel> {
    NSObject<OS_dispatch_io> *_channel;
    BOOL _isClosed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)a0;
- (void)setLowWater:(unsigned long long)a0;
- (void)writeData:(id)a0 offset:(long long)a1 queue:(id)a2 handler:(id /* block */)a3;
- (id)createRandomAccessChannel;
- (id)initForRandomWritingURL:(id)a0;
- (id)initForReadingURL:(id)a0;
- (id)initForStreamWritingURL:(id)a0;
- (id)initWithType:(unsigned long long)a0 URL:(id)a1 oflag:(int)a2 mode:(unsigned short)a3;
- (id)initWithType:(unsigned long long)a0 channel:(id)a1;
- (void)readFromOffset:(long long)a0 length:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)readWithQueue:(id)a0 handler:(id /* block */)a1;
- (void)writeData:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
