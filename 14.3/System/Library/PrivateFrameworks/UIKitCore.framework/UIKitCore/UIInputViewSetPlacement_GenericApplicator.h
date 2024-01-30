@class NSArray, NSString, UIView, NSLayoutConstraint;
@protocol UIInputViewSetPlacementOwner;

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {
    NSLayoutConstraint *_horizontalConstraint;
    NSLayoutConstraint *_verticalConstraint;
    NSLayoutConstraint *_widthConstraint;
    id<UIInputViewSetPlacementOwner> _owner;
}

@property (readonly) struct CGPoint { double x0; double x1; } origin;
@property (readonly, retain) NSArray *constraints;
@property (readonly, retain) UIView *draggableView;
@property (readonly, retain) UIView *twoFingerDraggableView;
@property (readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } popoverFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicatorForOwner:(id)a0 withPlacement:(id)a1;

- (void)prepare;
- (BOOL)allConstraintsActive;
- (void)checkVerticalConstraint;
- (void).cxx_destruct;
- (void)applyChanges:(id)a0;
- (BOOL)preBeginGesture:(id)a0 shouldBegin:(BOOL *)a1;
- (BOOL)isGesture:(id)a0 inDraggableView:(struct CGPoint { double x0; double x1; })a1;
- (id)initForOwner:(id)a0 withPlacement:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRect;
- (BOOL)isEqual:(id)a0;
- (void)invalidate;

@end
