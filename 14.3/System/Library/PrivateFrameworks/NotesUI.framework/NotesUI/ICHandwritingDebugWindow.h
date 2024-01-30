@class UIView;
@protocol ICHandwritingDebugDelegate;

@interface ICHandwritingDebugWindow : UIWindow

@property (nonatomic, getter=isDraggingWindow) BOOL draggingWindow;
@property (nonatomic, getter=isResizingWindow) BOOL resizingWindow;
@property (nonatomic) struct CGPoint { double x; double y; } initialTouchLocation;
@property (retain, nonatomic) UIView *resizeTriangle;
@property (weak, nonatomic) id<ICHandwritingDebugDelegate> handwritingDebugDelegate;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredFrame;
+ (void)savePreferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)refresh;
- (id)init;
- (void).cxx_destruct;
- (id)navigationController;
- (id)initWithCoder:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)sharedInit;
- (void)updateResizeTriangleFrame;
- (id)handwritingDebugViewController;

@end
