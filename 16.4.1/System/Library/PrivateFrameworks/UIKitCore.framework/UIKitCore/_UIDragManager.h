@class UIScreen, NSArray, CAContext, NSMutableArray;

@interface _UIDragManager : NSObject {
    CAContext *_dragImageContext;
    long long _pendingSessionRequests;
    NSMutableArray *_pendingSessionRequestsCompletionBlocks;
}

@property (copy, nonatomic) NSArray *dragSessionSources;
@property (copy, nonatomic) NSArray *dragSessionDestinations;
@property (readonly, nonatomic) CAContext *dragImageContext;
@property (readonly, weak, nonatomic) UIScreen *screen;

+ (void)initializeDraggingSystem;

- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (void)_willAddDeactivationReason:(id)a0;
- (id)beginDragWithSessionConfiguration:(id)a0;
- (void)deleteSlots:(id)a0;
- (id)dragDestinationWithEvent:(id)a0;
- (BOOL)hasPendingSessionRequests;
- (void)performAfterCompletingPendingSessionRequests:(id /* block */)a0;
- (void)performPendingSessionCompletionBlocksIfPossible;
- (void)sessionDestinationDidEnd:(id)a0;
- (void)sessionSourceDidEnd:(id)a0;
- (id)sessionSourceWithIdentifier:(unsigned int)a0;
- (unsigned int)uploadImage:(struct CGImage { } *)a0;

@end
