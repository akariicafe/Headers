@class NSString, NSDictionary, UIImage, UIImageSymbolConfiguration;
@protocol _UIBarButtonItemDataFallback;

@interface _UIBarButtonItemData : _UIBarAppearanceData <_UIBarButtonItemDataFallback> {
    NSDictionary *_titleTextAttributes[4];
    UIImage *_backgroundImage[4];
    struct UIOffset { double horizontal; double vertical; } _titlePositionAdjustment[4];
    struct UIOffset { double horizontal; double vertical; } _backgroundImagePositionAdjustment[4];
    UIImageSymbolConfiguration *_imageSymbolConfiguration;
    UIImageSymbolConfiguration *_compactImageSymbolConfiguration;
    UIImage *_backIndicatorImage;
    UIImage *_backIndicatorTransitionMaskImage;
    UIImageSymbolConfiguration *_backIndicatorSymbolConfiguration;
    UIImageSymbolConfiguration *_compactBackIndicatorSymbolConfiguration;
    id<_UIBarButtonItemDataFallback> _fallback;
    struct { unsigned char hasUserFont : 1; unsigned char hasUserColor : 1; unsigned char hasUserTitlePosition : 1; unsigned char hasUserBackgroundImage : 1; unsigned char hasUserBackgroundImagePosition : 1; } _stateFlags[4];
    struct { unsigned char isBackButtonData : 1; } _dataFlags;
}

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) BOOL isBackButtonData;
@property (readonly, nonatomic) id<_UIBarButtonItemDataFallback> fallback;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly, nonatomic) UIImageSymbolConfiguration *compactImageSymbolConfiguration;
@property (readonly, nonatomic) UIImage *backIndicatorImage;
@property (readonly, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (readonly, nonatomic) UIImage *compactBackIndicatorImage;
@property (readonly, nonatomic) UIImage *compactBackIndicatorTransitionMaskImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorSymbolConfiguration;
@property (readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorTransitionMaskSymbolConfiguration;
@property (readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorSymbolConfiguration;
@property (readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorTransitionMaskSymbolConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)standardBackButtonData;
+ (id)standardItemDataForStyle:(long long)a0;
+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (BOOL)checkEqualTo:(id)a0;
- (id)backgroundImageForState:(long long)a0 style:(long long)a1;
- (id)colorForState:(long long)a0 style:(long long)a1;
- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (id)copyAsBackButtonDataWithIndicatorsAndFallbackFrom:(id)a0;
- (void)describeInto:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)titleTextAttributesForState:(long long)a0;
- (id)replicate;
- (void).cxx_destruct;
- (id)_fallbackColorForState:(long long)a0;
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)a0 prefix:(id)a1;
- (void)setBackgroundImagePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forState:(long long)a1;
- (long long)hashInto:(long long)a0;
- (void)setBackgroundImage:(id)a0 forState:(long long)a1;
- (struct UIOffset { double x0; double x1; })backgroundImagePositionAdjustmentForState:(long long)a0 style:(long long)a1;
- (void)_decodeTitleTextAttributesFromCoder:(id)a0 prefix:(id)a1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forState:(long long)a1;
- (void)_decodeBackgroundPositionAdjustmentsFromCoder:(id)a0 prefix:(id)a1;
- (id)fontForState:(long long)a0 style:(long long)a1;
- (struct UIOffset { double x0; double x1; })titlePositionAdjustmentForState:(long long)a0 style:(long long)a1;
- (void)_decodeBackgroundImagesFromCoder:(id)a0 prefix:(id)a1;
- (id)_fallbackFontForState:(long long)a0;
- (void)setTitleTextAttributes:(id)a0 forState:(long long)a1;
- (struct UIOffset { double x0; double x1; })backgroundImagePositionAdjustmentForState:(long long)a0;
- (id)backgroundImageForState:(long long)a0;
- (id)dataWithNewFallback:(id)a0;
- (void)setBackIndicatorImage:(id)a0 transitionMaskImage:(id)a1;
- (struct UIOffset { double x0; double x1; })titlePositionAdjustmentForState:(long long)a0;
- (void)resetBackIndicatorImages;

@end
