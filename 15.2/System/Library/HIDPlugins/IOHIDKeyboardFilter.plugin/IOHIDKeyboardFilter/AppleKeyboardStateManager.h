@class NSMutableSet;

@interface AppleKeyboardStateManager : NSObject

@property (retain, nonatomic) NSMutableSet *capsLockStateTable;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isCapsLockEnabled:(id)a0;
- (void)setCapsLockEnabled:(BOOL)a0 locationID:(id)a1;

@end
