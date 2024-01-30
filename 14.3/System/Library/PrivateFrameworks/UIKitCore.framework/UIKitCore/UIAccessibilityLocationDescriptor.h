@class NSString, NSAttributedString, UIView;

@interface UIAccessibilityLocationDescriptor : NSObject

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSAttributedString *attributedName;

- (void).cxx_destruct;
- (id)initWithAttributedName:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (id)initWithName:(id)a0 view:(id)a1;

@end
