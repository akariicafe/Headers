@class NSThread, NSData, NSMutableArray, NSRunLoop;
@protocol AVAirTransportTransformationProtocol, AVAirTransportDelegate;

@interface AVAirTransport : NSObject {
    NSMutableArray *_outputQueue;
    NSData *_leftoverInputData;
    NSMutableArray *_requestCompletions;
}

@property (class, readonly, nonatomic) NSRunLoop *eventRunLoop;
@property (class, readonly, nonatomic) NSThread *eventThread;

@property (readonly, nonatomic) NSMutableArray *receiveResponseBlocks;
@property (readonly, nonatomic) BOOL canWrite;
@property (retain, nonatomic) id<AVAirTransportTransformationProtocol> streamDataTransformer;
@property (readonly, nonatomic) BOOL isReadyToSend;
@property (weak, nonatomic) id<AVAirTransportDelegate> delegate;

+ (void)performAsync:(id /* block */)a0;
+ (void)performSync:(id /* block */)a0;
+ (id)airTransportQueue;
+ (BOOL)_isRunningOnAirChannelQueue;
+ (void)startEventThreadIfNecessary;
+ (void)__performBlock:(id /* block */)a0;
+ (id)channelWithInput:(id)a0 output:(id)a1;

- (void)writeData:(id)a0;
- (void)close;
- (id)_initPrivate;
- (void)open;
- (long long)_writeData:(id)a0;
- (id)description;
- (void)sendResponse:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)requestCompletions;
- (void)terminatePendingRequests;
- (void)writeMore;
- (void)performOnAirChannelQueueSync:(id /* block */)a0;
- (void)sendObject:(id)a0 receiveResponse:(id /* block */)a1;

@end
