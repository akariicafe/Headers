@class NSCountedSet, NSMapTable, NSTimer;

@interface _UIFocusTreeLock : NSObject

@property (readonly, nonatomic) NSCountedSet *lockedEnvironments;
@property (readonly, nonatomic) NSMapTable *lockedEnvironmentHistogram;
@property (readonly, nonatomic) NSTimer *validationTimer;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)_validateLockedEnvironments;
- (void)lockEnvironmentTree:(id)a0;
- (BOOL)unlockEnvironmentTree:(id)a0;
- (BOOL)isEnvironmentLocked:(id)a0;

@end
