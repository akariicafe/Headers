@class NSString, UIView;
@protocol UICoordinateSpace, _UITextContent;

@interface _UITextItemDiscoverer : NSObject <_UITextItemDiscoverable>

@property (readonly, weak, nonatomic) UIView<_UITextContent> *view;
@property (readonly, nonatomic) id<UICoordinateSpace> textItemCoordinateSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBounds;
- (id)visibleTextRange;
- (id)textItemsOfType:(long long)a0 inTextRange:(id)a1;
- (BOOL)hasTextItemsOfType:(long long)a0 inTextRange:(id)a1;
- (id)_anyTextItemConstrainedToLineAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_textReferenceView;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nsrangeForTextRange:(id)a0;

@end
