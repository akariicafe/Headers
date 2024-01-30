@class UIVibrancyEffect, NSArray, UIBlurEffect, UIColor, UIImage, _UIBarBackgroundAppearanceData;
@protocol _UIBarAppearanceChangeObserver;

@interface UIBarAppearance : NSObject <NSCopying, NSSecureCoding> {
    _UIBarBackgroundAppearanceData *_backgroundData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setChangeObserver:) id<_UIBarAppearanceChangeObserver> _changeObserver;
@property (readonly) BOOL _hasTransparentBackground;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect;
@property (readonly, nonatomic) long long idiom;
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (copy, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIImage *shadowImage;

- (id)_tabLayoutAppearanceData;
- (id)_barTitleData;
- (void)_completeInit;
- (id)initWithBarAppearance:(id)a0;
- (void)_describeInto:(id)a0;
- (id)_compactInlineTabButtonAppearanceData;
- (id)_plainButtonAppearance;
- (id)_doneButtonAppearanceData;
- (id)_inlineTabButtonAppearanceData;
- (void)encodeWithCoder:(id)a0;
- (void)configureWithDefaultBackground;
- (id)_plainButtonAppearanceData;
- (id)_backButtonAppearance;
- (void)_decodeFromCoder:(id)a0;
- (void)_copyFromAppearance:(id)a0;
- (id)initWithIdiom:(long long)a0;
- (BOOL)_checkEqualTo:(id)a0;
- (id)_backButtonAppearanceData;
- (void)configureWithDefaultShadow;
- (void)configureWithoutShadow;
- (void)configureWithOpaqueBackground;
- (id)description;
- (id)_stackedTabButtonAppearanceData;
- (void)_setupDefaults;
- (id)_doneButtonAppearance;
- (id)_backgroundData;
- (void)configureWithTransparentBackground;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (unsigned long long)hash;

@end
