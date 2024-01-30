@class NSString, TSUStreamCompression;
@protocol TSUStreamWriteChannel;

@interface TSUCompressionWriteChannel : NSObject <TSUStreamWriteChannel> {
    id<TSUStreamWriteChannel> _writeChannel;
    TSUStreamCompression *_compressor;
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
- (void)addBarrier:(id /* block */)a0;
- (void)writeData:(id)a0 handler:(id /* block */)a1;
- (void)setLowWater:(unsigned long long)a0;
- (id)initWithWriteChannel:(id)a0 compressionAlgorithm:(int)a1 operation:(int)a2;

@end
