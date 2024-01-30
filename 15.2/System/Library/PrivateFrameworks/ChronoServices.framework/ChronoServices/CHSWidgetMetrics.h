@class NSString;

@interface CHSWidgetMetrics : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) long long textSizeAdjustment;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (struct CGSize { double x0; double x1; })_rawEffectiveSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)_roundToNearestOrUp:(double)a0 withScale:(double)a1;
- (id)succinctDescription;
- (struct CGSize { double x0; double x1; })_rawSizePixelAlignedForDisplayScale:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 textSizeAdjustment:(long long)a2;
- (struct CGSize { double x0; double x1; })_effectiveSizePixelAlignedForDisplayScale:(double)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (BOOL)_isUnitScale;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scale:(struct CGSize { double x0; double x1; })a2 textSizeAdjustment:(long long)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 scaleFactor:(double)a2 textSizeAdjustment:(long long)a3;

@end
