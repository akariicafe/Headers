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

+ (id)shadow;
+ (void)initialize;
+ (id)defaultShadowColor;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithShadow:(id)a0;
- (void)applyToGraphicsContext:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
