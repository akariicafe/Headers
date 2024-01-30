@class NSArray, UIColor;

@interface UISlidingBarConfiguration : NSObject <NSCopying> {
    union { unsigned int value; struct { unsigned char leadingMayBeHidden : 1; unsigned char trailingMayBeHidden : 1; unsigned char supplementaryMayBeHidden : 1; unsigned char allowMixedSideBySideAndOverlay : 1; unsigned char allowTotalWidthGreaterThanParent : 1; unsigned char forceOverlay : 1; unsigned char supplementaryComplementsLeadingTrailing : 1; unsigned char detachedMain : 1; unsigned char leadingBorderWidthIsInPixels : 1; unsigned char trailingBorderWidthIsInPixels : 1; unsigned char shouldFadeStaticNavBarButton : 1; unsigned int reserved : 21; } flags; } _configurationFlags;
}

@property (nonatomic, setter=_setRawLeadingBorderWidth:) double _rawLeadingBorderWidth;
@property (nonatomic, setter=_setLeadingBorderWidthIsInPixels:) BOOL _leadingBorderWidthIsInPixels;
@property (nonatomic, setter=_setRawTrailingBorderWidth:) double _rawTrailingBorderWidth;
@property (nonatomic, setter=_setTrailingBorderWidthIsInPixels:) BOOL _trailingBorderWidthIsInPixels;
@property (nonatomic, setter=_setLeadingBackgroundStyle:) long long _leadingBackgroundStyle;
@property (nonatomic, setter=_setTrailingBackgroundStyle:) long long _trailingBackgroundStyle;
@property (nonatomic) double minimumMainWidthFraction;
@property (nonatomic) double minimumMainWidthFractionForSecondColumn;
@property (nonatomic) double maximumMainWidth;
@property (nonatomic) long long supplementaryEdge;
@property (nonatomic) BOOL leadingMayBeHidden;
@property (nonatomic) BOOL trailingMayBeHidden;
@property (nonatomic) BOOL supplementaryMayBeHidden;
@property (nonatomic) double rubberBandExtension;
@property (copy, nonatomic) NSArray *leadingWidths;
@property (copy, nonatomic) NSArray *trailingWidths;
@property (copy, nonatomic) NSArray *supplementaryWidths;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL allowMixedSideBySideAndOverlay;
@property (nonatomic) BOOL allowTotalWidthGreaterThanParent;
@property (nonatomic) BOOL forceOverlay;
@property (nonatomic) BOOL supplementaryComplementsLeadingTrailing;
@property (nonatomic) BOOL detachedMain;
@property (nonatomic) BOOL shouldFadeStaticNavBarButton;

- (id)init;
- (void).cxx_destruct;
- (double)trailingBorderWidthForScale:(double)a0;
- (void)setLeadingBorderWidthInPixels:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLeadingBorderWidthInPoints:(double)a0;
- (void)setTrailingBorderWidthInPixels:(double)a0;
- (double)leadingBorderWidthForScale:(double)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setTrailingBorderWidthInPoints:(double)a0;

@end
