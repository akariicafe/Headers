@class UIColor;

@interface SUShadow : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyToLayer:(id)a0;

@end
