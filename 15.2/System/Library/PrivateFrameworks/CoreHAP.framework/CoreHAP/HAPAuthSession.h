@class NSUUID, NSString, NSData, NSNumber, NSObject;
@protocol OS_dispatch_queue, HAPAuthSessionDelegate;

@interface HAPAuthSession : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned char currentTID;
@property (retain, nonatomic) NSNumber *instanceId;
@property (retain, nonatomic) NSData *token1;
@property (retain, nonatomic) NSData *token2;
@property (retain, nonatomic) NSUUID *provisionUUID;
@property (readonly, weak) id<HAPAuthSessionDelegate> delegate;
@property (readonly, nonatomic) long long role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)_handleAuthExchangeData:(id)a0 withHeader:(BOOL)a1;
- (void)_reportAuthFailure;
- (BOOL)getToken:(id *)a0 uuid:(id *)a1;
- (void)sendTokenUpdateRequest:(id)a0;
- (void)resetSession;
- (void)_sendTokenUpdateRequest:(id)a0;
- (void)_handleTokenUpdateResponse:(id)a0 withHeader:(BOOL)a1;
- (void).cxx_destruct;
- (void)_sendTokenRequest;
- (void)_handleTokenResponse:(id)a0 withHeader:(BOOL)a1;
- (void)handleAuthExchangeData:(id)a0 withHeader:(BOOL)a1;
- (void)continueAuthAfterValidation:(BOOL)a0;
- (void)_resetSession;
- (id)initWithRole:(long long)a0 instanceId:(id)a1 delegate:(id)a2;

@end
