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
+ (void)__performBlock:(id /* block */)a0;
+ (BOOL)_isRunningOnAirChannelQueue;
+ (id)airTransportQueue;
+ (id)channelWithInput:(id)a0 output:(id)a1;
+ (void)performSync:(id /* block */)a0;
+ (void)startEventThreadIfNecessary;

- (void)sendResponse:(id)a0;
- (void)close;
- (id)_initPrivate;
- (void)dealloc;
- (void)open;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (long long)_writeData:(id)a0;
- (void)performOnAirChannelQueueSync:(id /* block */)a0;
- (id)requestCompletions;
- (void)sendObject:(id)a0 receiveResponse:(id /* block */)a1;
- (void)terminatePendingRequests;
- (void)writeMore;

@end
