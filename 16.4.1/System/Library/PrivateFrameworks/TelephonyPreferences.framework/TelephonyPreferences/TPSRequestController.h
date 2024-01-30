@class TPSRequest, NSMapTable, NSMutableOrderedSet, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface TPSRequestController : NSObject

@property (readonly, nonatomic) NSMapTable *delegateToQueue;
@property (retain, nonatomic) TPSRequest *pendingRequest;
@property (retain, nonatomic) NSMutableOrderedSet *requests;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (readonly, nonatomic) CoreTelephonyClient *telephonyClient;

- (void)execute;
- (void)addRequest:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)executeRequest:(id)a0;
- (void)postResponse:(id)a0;

@end
