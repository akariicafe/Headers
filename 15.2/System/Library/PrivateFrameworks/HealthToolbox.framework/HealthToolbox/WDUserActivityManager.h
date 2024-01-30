@class NSMutableDictionary, _WDActivityNode, NSMutableArray, UIViewController;

@interface WDUserActivityManager : NSObject {
    UIViewController *_rootViewController;
    _WDActivityNode *_topNode;
    _WDActivityNode *_currentNode;
    NSMutableDictionary *_indexedActivities;
}

@property (readonly, nonatomic) NSMutableArray *policies;
@property (nonatomic) BOOL recordActivities;

- (void)setRootViewController:(id)a0;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)addPolicy:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_userActivityWithTitle:(id)a0 keywords:(id)a1 activityType:(id)a2;
- (void)transitionActivityForResponder:(id)a0 newResponder:(id)a1 transitionDictionary:(id)a2;
- (BOOL)_restoreActivityFromPolicies:(id)a0;
- (void)_restoreFromActivityChain:(id)a0;
- (id)_userActivityWithType:(id)a0;
- (void)_resetActivities;
- (void)_setCurrentNodeToResponder:(id)a0;
- (void)changeActivityForResponder:(id)a0 activityDictionary:(id)a1 title:(id)a2 keywords:(id)a3;
- (void)restoreFromUserActivity:(id)a0;

@end
