@class PGHostedWindowHostingHandle;

@interface PGHostedWindow : _UIHostedWindow

@property (readonly, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_canBecomeKeyWindow;

@end
