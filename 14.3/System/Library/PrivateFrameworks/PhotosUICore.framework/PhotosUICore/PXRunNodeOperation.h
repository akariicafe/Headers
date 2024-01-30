@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock;
@property (readonly, nonatomic) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingIsExecuting;

- (BOOL)isReady;
- (id)initWithRunNode:(id)a0;
- (BOOL)cancelIfAble;
- (BOOL)completeIfAble;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_transitionToState:(unsigned long long)a0;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;

@end
