@class NSString, NSArray, NSError, NSObject;
@protocol OS_dispatch_data, TSUReadChannel, OS_dispatch_queue, TSUStreamReadChannel;

@interface TSUBufferedReadChannel : NSObject <TSUReadChannel> {
    NSObject<OS_dispatch_queue> *_readQueue;
    id<TSUReadChannel> _sourceReadChannel;
    unsigned long long _sourceReadBufferSize;
    long long _sourceOffset;
    unsigned long long _sourceLength;
    NSError *_sourceReadChannelError;
    NSArray *_blockInfos;
    id /* block */ _streamReadChannelBlock;
    id<TSUStreamReadChannel> _streamReadChannel;
    id /* block */ _streamReadChannelSourceHandler;
    BOOL _isStreamOutputDone;
    long long _streamOutputOffset;
    unsigned long long _streamOutputOutstandingLength;
    unsigned long long _streamOutputLength;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_close;
- (void)readWithHandler:(id /* block */)a0;
- (void)addBarrier:(id /* block */)a0;
- (void)readFromOffset:(long long)a0 length:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)setStreamReadChannelSourceHandler:(id /* block */)a0;
- (void)setLowWater:(unsigned long long)a0;
- (id)initWithReadChannel:(id)a0 blockInfos:(id)a1 streamReadChannelBlock:(id /* block */)a2;
- (id)initWithReadChannel:(id)a0 sourceReadBufferSize:(unsigned long long)a1 blockInfos:(id)a2 streamReadChannelBlock:(id /* block */)a3;
- (void)_closeStreamReadChannel;
- (void)_readFromOffset:(long long)a0 length:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)a0 length:(unsigned long long)a1;
- (id)_currentDataIntersectionWithOffset:(long long)a0 length:(unsigned long long)a1 isReadDone:(BOOL *)a2;

@end
