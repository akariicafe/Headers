@class NSLock, PXRunNode;

@interface PXRunNodeOperation : NSOperation

@property (readonly, nonatomic) NSLock *_stateLock;
@property (readonly, nonatomic) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsReady;

- (BOOL)isReady;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)_transitionToState:(unsigned long long)a0;
- (BOOL)isAsynchronous;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (BOOL)cancelIfAble;
- (BOOL)completeIfAble;
- (id)initWithRunNode:(id)a0;

@end
