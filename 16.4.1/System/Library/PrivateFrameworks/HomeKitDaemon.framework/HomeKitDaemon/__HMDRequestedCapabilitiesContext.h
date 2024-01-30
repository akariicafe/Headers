@class NSUUID, NSDictionary, NSString, HMDTimerManagerTimerContext, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface __HMDRequestedCapabilitiesContext : NSObject

@property (readonly, nonatomic) NSUUID *transactionID;
@property (readonly, copy, nonatomic) NSDictionary *requestedCapabilities;
@property (readonly, nonatomic) NSString *destinationAddress;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSMutableArray *receivedResponses;
@property (retain, nonatomic) HMDTimerManagerTimerContext *timerContext;

- (void).cxx_destruct;
- (id)initWithTransactionID:(id)a0 requestedCapabilities:(id)a1 destinationAddress:(id)a2 responseQueue:(id)a3 completionHandler:(id /* block */)a4;

@end
