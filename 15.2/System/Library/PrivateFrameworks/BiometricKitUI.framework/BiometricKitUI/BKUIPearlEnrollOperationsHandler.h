@class BioStreamsEventHelper, NSString, NSData, NSDate, BKIdentity, LAContext, NSMutableArray, BKDevicePearl, SFClient, BKEnrollPearlOperation, NSObject;
@protocol OS_dispatch_queue, BKUIPearlEnrollOperationsDelegate;

@interface BKUIPearlEnrollOperationsHandler : NSObject <BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, LAUIDelegate> {
    SFClient *_sharingclient;
    LAContext *_authContext;
    BOOL _enrollOperationInProgress;
    NSObject<OS_dispatch_queue> *_enrollStartStopQueue;
    NSDate *_lastFaceFoundDate;
    BOOL _userSelectedUseAccessibilityEnrollment;
}

@property (retain, nonatomic) BKEnrollPearlOperation *enrollOperation;
@property (retain, nonatomic) BKDevicePearl *device;
@property (retain, nonatomic) BioStreamsEventHelper *bioStreamEventHelper;
@property (nonatomic) double bioKitCompletionPercentage;
@property (nonatomic) BOOL canStartEnrollmentOperation;
@property (weak, nonatomic) id<BKUIPearlEnrollOperationsDelegate> operationsDelegate;
@property (copy, nonatomic) NSString *credential;
@property (nonatomic, getter=isSuspended) BOOL suspend;
@property (nonatomic) BOOL inbuddy;
@property (retain, nonatomic) NSMutableArray *poseStatus;
@property (nonatomic) unsigned long long enrollmentConfiguration;
@property (retain, nonatomic) BKIdentity *identity;
@property (retain, nonatomic) NSData *externalizedAuthContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isActive;
- (void).cxx_destruct;
- (id)init;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)operation:(id)a0 faceDetectStateChanged:(id)a1;
- (void)enrollOperation:(id)a0 finishedWithIdentity:(id)a1;
- (void)enrollOperation:(id)a0 percentCompleted:(long long)a1;
- (void)enrollOperation:(id)a0 failedWithReason:(long long)a1;
- (void)enrollOperation:(id)a0 progressedWithInfo:(id)a1;
- (void)cleanupEnroll;
- (void)cancelCurrentEnrollmentOperationIfUnfinished;
- (void)advanceEnrollmentState;
- (void)cancelEnroll;
- (void)startEnroll;
- (void)matchUserForSecondPhaseEnrollmentWithCompletionAction:(id /* block */)a0;
- (BOOL)completeCurrentEnrollOperationWithError:(id *)a0;
- (void)cancelEnrollForRotation;
- (void)_cleanupEnroll;
- (void)_cleanupEnroll:(BOOL)a0;
- (void)_removeIdentity;
- (id)getAuthContextForCredentialError:(id *)a0;
- (void)startEnrollForEnrollmentType:(long long)a0 identity:(id)a1 operationStartedActionBlock:(id /* block */)a2;
- (BOOL)_validateEnrolledPoses:(id)a0;

@end
