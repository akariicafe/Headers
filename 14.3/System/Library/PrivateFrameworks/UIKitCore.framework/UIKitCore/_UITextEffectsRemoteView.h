@class _UIRemoteViewController;

@interface _UITextEffectsRemoteView : _UIRemoteView

@property (nonatomic) _UIRemoteViewController *remoteViewController;

+ (BOOL)_requiresWindowTouches;

- (int)textEffectsVisibilityLevel;

@end
