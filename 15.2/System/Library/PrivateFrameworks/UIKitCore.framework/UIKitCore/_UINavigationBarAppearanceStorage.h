@class NSString, NSDictionary, UIImage, _UIBarButtonItemAppearanceStorage, NSNumber, NSMutableDictionary;

@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage {
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;
    long long barMetrics;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
}

@property (readonly, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) UIImage *miniBackgroundImage;
@property (readonly, nonatomic) UIImage *promptBackgroundImage;
@property (readonly, nonatomic) UIImage *miniPromptBackgroundImage;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (retain, nonatomic) UIImage *shadowImage;
@property (nonatomic) BOOL hidesShadow;
@property (nonatomic) long long defaultBarMetrics;
@property (nonatomic) long long activeBarMetrics;
@property (nonatomic) BOOL reversesShadowOffset;
@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;
@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;
@property (nonatomic) BOOL deferShadowToSearchBar;
@property (retain, nonatomic) UIImage *backIndicatorImage;
@property (retain, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (retain, nonatomic) NSNumber *backIndicatorLeftMargin;
@property (retain, nonatomic) NSString *backdropViewGroupName;

+ (long long)typicalBarPosition;

- (double)titleVerticalAdjustmentForBarMetrics:(long long)a0;
- (void).cxx_destruct;
- (id)representativeImageForIdiom:(long long)a0;
- (void)setTitleVerticalAdjustment:(double)a0 forBarMetrics:(long long)a1;

@end
