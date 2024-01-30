@interface QLAppearance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double topInset;
@property (readonly) double bottomInset;
@property (readonly) unsigned long long presentationMode;
@property (readonly) struct UIEdgeInsets { double top; double left; double bottom; double right; } peripheryInsets;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTopInset:(double)a0 bottomInset:(double)a1 presentationMode:(unsigned long long)a2 peripheryInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;

@end
