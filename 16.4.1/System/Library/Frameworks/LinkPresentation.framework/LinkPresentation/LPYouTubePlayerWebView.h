@interface LPYouTubePlayerWebView : WKWebView

@property (nonatomic) BOOL allowFirstResponder;

- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;

@end
