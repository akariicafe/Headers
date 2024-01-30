@class UIColor, NADescriptionBuilder, NAIdentity, NSString;

@interface WKLayeredStripeWallpaperInput : NSObject <WKDescribable, NAIdentifiable, NSCopying>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double stripeAngleDegrees;
@property (readonly, nonatomic) double stripeHeightFactor;
@property (readonly, nonatomic) double firstStripeOffsetScaleFactor;
@property (readonly, nonatomic) NADescriptionBuilder *wk_descriptionBuilder;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) id /* block */ descriptionBuilderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBackgroundColor:(id)a0 stripeAngleDegrees:(double)a1 stripeHeightFactor:(double)a2 firstStripeOffsetScaleFactor:(double)a3;
- (id)init;
- (void).cxx_destruct;

@end
