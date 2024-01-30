@class UIFont, LPPointUnit, LPPadding, LPShadowStyle, LPSize, NSNumber, UIColor;

@interface LPImageViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild, NSCopying>

@property (retain, nonatomic) LPSize *fixedSize;
@property (nonatomic) BOOL requireFixedSize;
@property (retain, nonatomic) LPSize *minimumSize;
@property (retain, nonatomic) LPPointUnit *fixedFallbackImageSize;
@property (retain, nonatomic) NSNumber *fixedFallbackImageWeight;
@property (retain, nonatomic) UIFont *fixedFallbackImageFont;
@property (retain, nonatomic) NSNumber *fixedFallbackImageScale;
@property (readonly, retain, nonatomic) LPPadding *margin;
@property (readonly, retain, nonatomic) LPPadding *padding;
@property (nonatomic) long long scalingMode;
@property (nonatomic) long long filter;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) BOOL scalesToFitParent;
@property (retain, nonatomic) LPShadowStyle *shadow;
@property (retain, nonatomic) UIColor *maskColor;
@property (nonatomic) double opacity;
@property (nonatomic) BOOL allowsPlatterPresentation;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL shouldApplyBackground;
@property (retain, nonatomic) LPPointUnit *backgroundInset;
@property (retain, nonatomic) LPPointUnit *cornerRadius;
@property (nonatomic) double darkeningAmount;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)emailCompatibleMargin;

@end
