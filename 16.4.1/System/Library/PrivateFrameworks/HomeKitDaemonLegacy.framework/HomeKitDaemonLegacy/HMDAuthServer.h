@class HMFTimer, NSString, NSUUID, NSData, NSLocale, MFAATokenManager, NSObject;
@protocol OS_dispatch_queue, HMDAuthServerDelegate;

@interface HMDAuthServer : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) MFAATokenManager *tokenManager;
@property (retain, nonatomic) HMFTimer *retryTimer;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSData *token;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long authFeatures;
@property (nonatomic) unsigned long long currentOperation;
@property (readonly, weak) id<HMDAuthServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)getPPIDInfo:(id)a0 model:(id)a1 cert:(id)a2 context:(id)a3;
- (void)_handleResponseMetadata:(id)a0 ppid:(id)a1 locale:(id)a2 context:(id)a3 error:(id)a4;
- (void)_reportFailureWithContext:(id)a0 error:(id)a1;
- (void)resetRetryOperation;
- (BOOL)resumeRetryIfPending;
- (void)retryOrReportFailure:(id)a0 context:(id)a1;
- (void)saveRetryOperation:(unsigned long long)a0 token:(id)a1 authFeatures:(unsigned long long)a2 uuid:(id)a3 context:(id)a4 locale:(id)a5 model:(id)a6;
- (void)sendActivationConfirmation:(id)a0 uuid:(id)a1 context:(id)a2;
- (void)sendActivationRequest:(id)a0 uuid:(id)a1 context:(id)a2;
- (void)sendPPIDInfoRequest:(id)a0 model:(id)a1 token:(id)a2 authFeatures:(unsigned long long)a3 uuid:(id)a4 context:(id)a5;

@end
