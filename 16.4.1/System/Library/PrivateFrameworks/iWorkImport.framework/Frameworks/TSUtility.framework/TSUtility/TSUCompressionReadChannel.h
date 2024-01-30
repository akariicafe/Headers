@class NSString, TSUStreamCompression;
@protocol TSUStreamReadChannel;

@interface TSUCompressionReadChannel : NSObject <TSUStreamReadChannel> {
    id<TSUStreamReadChannel> _readChannel;
    TSUStreamCompression *_compressor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)readWithHandler:(id /* block */)a0;
- (id)initWithReadChannel:(id)a0 compressionAlgorithm:(int)a1 operation:(int)a2;
- (void)readWithHandlerAndWait:(id /* block */)a0;

@end
