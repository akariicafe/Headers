@class BKIdentity;
@protocol BKMatchPearlOperationDelegate;

@interface BKMatchPearlOperation : BKMatchOperation

@property (weak, nonatomic) id<BKMatchPearlOperationDelegate> delegate;
@property (nonatomic) BOOL longTimeout;
@property (nonatomic) BOOL shouldAutoRetry;
@property (nonatomic) BOOL preAugmentationCheck;
@property (retain, nonatomic) BKIdentity *preAugmentationCheckIdentity;

- (void)statusMessage:(unsigned int)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)enableAutoRetry:(BOOL)a0 error:(id *)a1;
- (BOOL)startNewMatchAttemptWithError:(id *)a0;
- (id)optionsDictionaryWithError:(id *)a0;
- (id)matchResultInfoWithServerIdentity:(id)a0 details:(id)a1;
- (BOOL)pauseFaceDetectTimer:(BOOL)a0 error:(id *)a1;

@end
