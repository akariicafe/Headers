@interface LPYouTubePlayerWebView : WKWebView

@property (nonatomic) BOOL allowFirstResponder;

- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;

@end
