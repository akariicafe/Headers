@class PGHostedWindowHostingHandle;

@interface PGHostedWindow : _UIHostedWindow

@property (readonly, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;

- (BOOL)_canBecomeKeyWindow;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
