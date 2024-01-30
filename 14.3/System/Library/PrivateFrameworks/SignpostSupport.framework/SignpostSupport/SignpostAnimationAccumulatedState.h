@class SignpostEvent, NSMutableArray;

@interface SignpostAnimationAccumulatedState : NSObject

@property (readonly, nonatomic) SignpostEvent *animationBeginEvent;
@property (readonly, nonatomic) NSMutableArray *compositorIntervals;
@property (readonly, nonatomic) NSMutableArray *longCommitIntervals;
@property (readonly, nonatomic) NSMutableArray *allCommitIntervals;
@property (readonly, nonatomic) NSMutableArray *longSystemwideCommitIntervals;
@property (readonly, nonatomic) NSMutableArray *allSystemwideCommitIntervals;
@property (readonly, nonatomic) NSMutableArray *longTransactionLifetimes;
@property (readonly, nonatomic) NSMutableArray *allTransactionLifetimes;
@property (readonly, nonatomic) NSMutableArray *longFrameLatencies;
@property (readonly, nonatomic) NSMutableArray *allFrameLatencies;
@property (readonly, nonatomic) NSMutableArray *longHIDLatencies;
@property (readonly, nonatomic) NSMutableArray *allHIDLatencies;
@property (readonly, nonatomic) NSMutableArray *longRenders;
@property (readonly, nonatomic) NSMutableArray *allRenders;
@property (readonly, nonatomic) NSMutableArray *longFrameLifetimes;
@property (readonly, nonatomic) NSMutableArray *longContributedFrameLifetimes;
@property (readonly, nonatomic) NSMutableArray *allFrameLifetimes;
@property (readonly, nonatomic) NSMutableArray *allContributedFrameLifetimes;

- (void).cxx_destruct;
- (id)initWithAnimationBeginEvent:(id)a0 shouldTrackComposites:(BOOL)a1 shouldTrackInMemoryEvents:(BOOL)a2;
- (void)_handleCommitInterval:(id)a0 isLong:(BOOL)a1 isConcise:(BOOL)a2;
- (void)_handleTransactionLifetimeInterval:(id)a0 isLong:(BOOL)a1 isConcise:(BOOL)a2;
- (void)_handleHIDLatency:(id)a0 isLong:(BOOL)a1 isConcise:(BOOL)a2;
- (void)_handleRenderServerRender:(id)a0 isLong:(BOOL)a1 isConcise:(BOOL)a2;
- (void)_handleFrameLatency:(id)a0 isLong:(BOOL)a1 isConcise:(BOOL)a2;
- (void)_handleFrameLifetime:(id)a0 isLong:(BOOL)a1 isConcise:(BOOL)a2;
- (void)addCompositorInterval:(id)a0;

@end
