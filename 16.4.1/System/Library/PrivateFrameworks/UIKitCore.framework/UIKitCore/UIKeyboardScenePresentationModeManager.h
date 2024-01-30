@protocol UIKeyboardScenePresentationModeManagerDelegate;

@interface UIKeyboardScenePresentationModeManager : NSObject

@property (nonatomic) BOOL enhancedWindowingModeEnabled;
@property (nonatomic) unsigned long long currentPresentationMode;
@property (readonly, nonatomic) unsigned long long presentationMode;
@property (weak, nonatomic) id<UIKeyboardScenePresentationModeManagerDelegate> delegate;

- (void).cxx_destruct;
- (unsigned long long)determineiPhonePresentationMode;
- (void)_enhancedWindowingModeEnabledDidChange:(id)a0;
- (unsigned long long)determinePresentationMode;
- (unsigned long long)determineiPadPresentationMode;
- (void)didChangeToPresentationMode:(unsigned long long)a0;
- (void)enhancedWindowingModeEnabledDidChange:(BOOL)a0;

@end
