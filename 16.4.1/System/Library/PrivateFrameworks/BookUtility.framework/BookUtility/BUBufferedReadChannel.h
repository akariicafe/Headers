@class NSArray, NSString, NSError, NSObject;
@protocol OS_dispatch_data, BUStreamReadChannel, OS_dispatch_queue, BUReadChannel;

@interface BUBufferedReadChannel : NSObject <BUReadChannel>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *readQueue;
@property (retain, nonatomic) id<BUReadChannel> sourceReadChannel;
@property (nonatomic) unsigned long long sourceReadBufferSize;
@property (nonatomic) long long sourceOffset;
@property (nonatomic) unsigned long long sourceLength;
@property (retain, nonatomic) NSError *sourceReadChannelError;
@property (retain, nonatomic) NSArray *blockInfos;
@property (copy, nonatomic) id /* block */ streamReadChannelBlock;
@property (retain, nonatomic) id<BUStreamReadChannel> streamReadChannel;
@property (nonatomic, getter=isStreamOutputDone) BOOL streamOutputDone;
@property (nonatomic) long long streamOutputOffset;
@property (nonatomic) unsigned long long streamOutputOutstandingLength;
@property (nonatomic) unsigned long long streamOutputLength;
@property (retain, nonatomic) NSObject<OS_dispatch_data> *currentStreamOutputData;
@property (copy, nonatomic) id /* block */ streamReadChannelSourceHandler;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_close;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)_readFromOffset:(long long)a0 length:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_closeStreamReadChannel;
- (id)_currentDataIntersectionWithOffset:(long long)a0 length:(unsigned long long)a1 isReadDone:(BOOL *)a2;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)a0 length:(unsigned long long)a1;
- (void)addBarrier:(id /* block */)a0;
- (id)initWithReadChannel:(id)a0 blockInfos:(id)a1 streamReadChannelBlock:(id /* block */)a2;
- (id)initWithReadChannel:(id)a0 sourceReadBufferSize:(unsigned long long)a1 blockInfos:(id)a2 streamReadChannelBlock:(id /* block */)a3;
- (void)readFromOffset:(long long)a0 length:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)readWithHandler:(id /* block */)a0;
- (void)setLowWater:(unsigned long long)a0;

@end
