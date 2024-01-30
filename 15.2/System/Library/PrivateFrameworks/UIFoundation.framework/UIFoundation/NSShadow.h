@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _shadowFlags;
    struct CGSize { double width; double height; } _shadowOffset;
    double _shadowBlurRadius;
    NSColor *_shadowColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowBlurRadius;
@property (retain, nonatomic) id shadowColor;

+ (void)initialize;
+ (id)defaultShadowColor;
+ (id)shadow;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToGraphicsContext:(id)a0;
- (id)initWithShadow:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
