@class NSMutableSet, NSObject;
@protocol TSDTrackerManipulator;

@interface TSDTrackerManipulatorCoordinator : NSObject {
    NSMutableSet *mRegisteredTMs;
}

@property (readonly, nonatomic) NSObject<TSDTrackerManipulator> *controllingTM;

+ (void)p_removeDynamicSubclass:(id)a0;
+ (void)p_dynamicallySubclassGRForNotification:(id)a0;

- (id)init;
- (void)dealloc;
- (void)registerTrackerManipulator:(id)a0;
- (BOOL)takeControlWithTrackerManipulator:(id)a0;
- (void)operationDidEnd;
- (void)operationWillEnd;
- (BOOL)hasRegisteredTrackerManipulator:(id)a0;
- (void)p_notifyControlChange;
- (BOOL)relinquishTrackerManipulatorControl:(id)a0;
- (void)unregisterTrackerManipulator:(id)a0;

@end
