@class UIView, ICPencilKitAttachmentAccessibilityElement;

@interface ICPencilKitAttachmentResizeHandleAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) ICPencilKitAttachmentAccessibilityElement *attachmentElement;
@property (weak, nonatomic) UIView *drawingResizeView;
@property (readonly, nonatomic) BOOL top;
@property (readonly, nonatomic) BOOL isEnabled;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityContainer;
- (id)initWithAttachmentAccessibilityElement:(id)a0 drawingResizeView:(id)a1;

@end
