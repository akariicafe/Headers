@class NSMutableArray, NSUUID, RTPowerAssertion, NSCloudKitMirroringRequest, NSDate, RTPersistenceMirroringPolicy, NSObject;
@protocol OS_os_transaction, RTPersistenceMirroringRequestDelegate, OS_dispatch_queue;

@interface RTPersistenceMirroringRequest : NSObject {
    unsigned long long _sid;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *enqueueDate;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic) unsigned long long maxRetryCount;
@property (retain, nonatomic) RTPersistenceMirroringPolicy *mirroringPolicy;
@property (retain, nonatomic) NSObject<OS_os_transaction> *mirroringTransaction;
@property (retain, nonatomic) RTPowerAssertion *mirroringAssertion;
@property (nonatomic) long long requestType;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) NSCloudKitMirroringRequest *request;
@property (weak, nonatomic) id<RTPersistenceMirroringRequestDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *completionHandlers;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_completeRequestWithError:(id)a0;
- (void)_createMirroringRequestWithRequestType:(long long)a0 affectedStores:(id)a1 options:(id)a2;
- (void)_dispatchAllHandlersWithError:(id)a0;
- (void)_handleMirroringRequestResult:(id)a0;
- (void)_prepareMirroringRequestForRetry:(id)a0;
- (void)completeRequestWithError:(id)a0;
- (void)executeMirroringRequestWithContext:(id)a0;
- (void)handleMirroringRequestResult:(id)a0;
- (id)initWithQueue:(id)a0 requestType:(long long)a1 mirroringPolicy:(id)a2 affectedStores:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (BOOL)isEqualToMirroringRequest:(id)a0;
- (void)mergeRequest:(id)a0;
- (id)requestTypeToString:(long long)a0;

@end
