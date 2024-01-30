@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock;
@property (readonly, nonatomic) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;

- (BOOL)isReady;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (BOOL)_transitionToState:(unsigned long long)a0;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRunNode:(id)a0;
- (BOOL)cancelIfAble;
- (BOOL)completeIfAble;

@end
