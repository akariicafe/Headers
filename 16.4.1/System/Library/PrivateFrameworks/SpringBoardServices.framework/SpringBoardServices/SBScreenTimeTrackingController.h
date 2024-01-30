@class FBSDisplayLayoutMonitor, NSString, FBSDisplayLayout, NSObject, FBSDisplayLayoutTransitionContext;
@protocol OS_dispatch_queue;

@interface SBScreenTimeTrackingController : NSObject <FBSDisplayLayoutObserver> {
    FBSDisplayLayoutMonitor *_layoutMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_isScreenOn;
    BOOL _queue_isPhoneOrFaceTimeActive;
    unsigned long long _queue_thisCategoryStartTime;
    double _queue_lastCategoryChangeTime;
    int _queue_activeContext;
    int _queue_activeCategory;
    FBSDisplayLayout *_queue_lastLayout;
    FBSDisplayLayoutTransitionContext *_queue_lastLayoutTransitionContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)_queue_handleNewLayout:(id)a0 withContext:(id)a1;
- (id)_nameForContext:(int)a0;
- (void)dealloc;
- (id)init;
- (void)_queue_setActiveCategory:(int)a0 context:(int)a1;
- (void)_queue_setScreenOn:(BOOL)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (void)_queue_setPhoneOrFaceTimeActive:(BOOL)a0;

@end
