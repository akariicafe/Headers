@class NSTimer, NSMapTable;

@interface _UIFocusTreeLock : NSObject

@property (readonly, nonatomic) NSMapTable *lockedEnvironments;
@property (readonly, nonatomic) NSTimer *validationTimer;

- (BOOL)isEnvironmentLocked:(id)a0;
- (void)_validateLockedEnvironments;
- (id)init;
- (void)lockEnvironmentTree:(id)a0;
- (BOOL)unlockEnvironmentTree:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
