@class NSString, BKUIFaceIDEnrollOperationsHandler, BKIdentity, NSData, BKMatchPearlOperation, BKDevicePearl;
@protocol BKUIPearlEnrollOperationsDelegate;

@interface BKUIMatchVerifyPearlOperation : NSObject <BKMatchPearlOperationDelegate>

@property (copy, nonatomic) id /* block */ matchOperationDidMatch;
@property (retain, nonatomic) BKMatchPearlOperation *matchOperation;
@property (weak, nonatomic) BKUIFaceIDEnrollOperationsHandler *weakHandler;
@property (weak, nonatomic) id<BKUIPearlEnrollOperationsDelegate> operationsDelegate;
@property (nonatomic) int lastErrorousSubState;
@property (nonatomic) int substate;
@property (nonatomic) int currentUIDelegateDisplaySubState;
@property (nonatomic) long long failReason;
@property (retain, nonatomic) BKIdentity *identity;
@property (retain, nonatomic) BKDevicePearl *device;
@property (retain, nonatomic) BKIdentity *matchedIdentity;
@property (retain, nonatomic) NSData *credentialSet;
@property (nonatomic) unsigned long long enrollmentConfiguration;
@property (nonatomic) BOOL delegateUIAtNeedsPosition;
@property (nonatomic) BOOL faceDetected;
@property (nonatomic) BOOL matchFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)operation:(id)a0 faceDetectStateChanged:(id)a1;
- (void)operation:(id)a0 stateChanged:(long long)a1;
- (void)matchOperation:(id)a0 providedFeedback:(long long)a1;
- (id)init;
- (void)matchOperation:(id)a0 matchedWithResult:(id)a1;
- (void).cxx_destruct;
- (void)matchOperation:(id)a0 failedWithReason:(long long)a1;
- (void)matchOperation:(id)a0 presenceDetectedInLockout:(long long)a1;
- (void)cancelMatchOperation;
- (void)moveEnrollStateToNeedsPositioning:(int)a0;
- (void)retryMatchOperation;
- (void)startMatchOperationWithDevice:(id)a0 identity:(id)a1 credential:(id)a2 withConfiguration:(unsigned long long)a3 matchOperationActionBlock:(id /* block */)a4;
- (int)substateForFaceDetectionFeedBack:(long long)a0;

@end
