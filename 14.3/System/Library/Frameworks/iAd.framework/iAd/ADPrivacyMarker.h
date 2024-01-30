@class NSLayoutConstraint;

@interface ADPrivacyMarker : UIButton

@property (nonatomic) BOOL isVideo;
@property (retain, nonatomic) NSLayoutConstraint *constraintHeight;
@property (retain, nonatomic) NSLayoutConstraint *constraintWidth;

+ (id)localizedAdMarkerText;
+ (id)dimensionsForVideoMarker;
+ (id)bundleForLocalizedString;
+ (id)deviceContentSize;
+ (id)localizedLearnMoreText;

- (void)renderMarkerForBannerForCategory:(id)a0 andLanguage:(BOOL)a1;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)updateAdMarkerSpec;
- (void)resetBannerMarkerForVideoMarker;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)updateBackgroundAndTintColor;

@end
