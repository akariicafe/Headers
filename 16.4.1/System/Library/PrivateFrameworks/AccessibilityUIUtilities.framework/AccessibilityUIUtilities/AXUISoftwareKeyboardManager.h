@class NSMutableSet;
@protocol AXUISoftwareKeyboardManagerDelegate;

@interface AXUISoftwareKeyboardManager : NSObject {
    NSMutableSet *_reasonsToDisableSoftwareKeyboard;
    NSMutableSet *_reasonsToEnableSoftwareKeyboard;
}

@property (weak, nonatomic) id<AXUISoftwareKeyboardManagerDelegate> delegate;

+ (id)sharedInstance;

- (BOOL)isHardwareKeyboardAttached;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setIsHardwareKeyboardAttached:(BOOL)a0;
- (void)_overrideSetHardwareKeyboardAttached:(BOOL)a0;
- (void)_updateHardwareKeyboardState;
- (void)_wst_setIsHardwareKeyboardAttached:(id)a0;
- (void)addReasonToDisableSoftwareKeyboard:(id)a0;
- (void)addReasonToEnableSoftwareKeyboard:(id)a0;
- (void)removeReasonToDisableSoftwareKeyboard:(id)a0;
- (void)removeReasonToEnableSoftwareKeyboard:(id)a0;
- (void)updateKeyboardHardwareState;

@end
