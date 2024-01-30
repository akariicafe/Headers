@interface TMLInsets : NSObject <TMLInsetsJSExports, NSCopying> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
}

@property (readonly, nonatomic) double top;
@property (readonly, nonatomic) double left;
@property (readonly, nonatomic) double bottom;
@property (readonly, nonatomic) double right;

+ (void)initializeJSContext:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UIEdgeInsetsValue;
- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })UIEdgeInsets;

@end
