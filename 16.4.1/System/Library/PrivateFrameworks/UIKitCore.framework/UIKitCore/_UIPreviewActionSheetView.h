@class NSArray, NSString, UILongPressGestureRecognizer;
@protocol _UIPreviewActionSheetViewDelegate;

@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UILongPressGestureRecognizer *captureTouchesRecognizer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (weak, nonatomic) id<_UIPreviewActionSheetViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_performActionForPreviewAction:(id)a0 interfaceAction:(id)a1;
- (void)_setupViewHierarchy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 items:(id)a2 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;

@end
