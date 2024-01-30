@class UIVibrancyEffect, NSArray, UIBlurEffect, UIColor, UIImage, _UIBarBackgroundAppearanceData;
@protocol _UIBarAppearanceChangeObserver;

@interface UIBarAppearance : NSObject <NSCopying, NSSecureCoding> {
    _UIBarBackgroundAppearanceData *_backgroundData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setChangeObserver:) id<_UIBarAppearanceChangeObserver> _changeObserver;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect;
@property (readonly, nonatomic) long long idiom;
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (copy, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIImage *shadowImage;

- (void)configureWithDefaultBackground;
- (id)_doneButtonAppearance;
- (BOOL)_checkEqualTo:(id)a0;
- (id)_plainButtonAppearance;
- (void)configureWithDefaultShadow;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_doneButtonAppearanceData;
- (id)_compactInlineTabButtonAppearanceData;
- (void)_copyFromAppearance:(id)a0;
- (id)initWithIdiom:(long long)a0;
- (id)_plainButtonAppearanceData;
- (id)_tabLayoutAppearanceData;
- (void)configureWithOpaqueBackground;
- (id)copy;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (id)_stackedTabButtonAppearanceData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)configureWithTransparentBackground;
- (void)_decodeFromCoder:(id)a0;
- (id)description;
- (void)_completeInit;
- (id)_backButtonAppearanceData;
- (BOOL)isEqual:(id)a0;
- (void)_setupDefaults;
- (id)initWithBarAppearance:(id)a0;
- (void)_describeInto:(id)a0;
- (id)_barTitleData;
- (id)_backgroundData;
- (id)_backButtonAppearance;
- (void)configureWithoutShadow;
- (void)encodeWithCoder:(id)a0;
- (id)_inlineTabButtonAppearanceData;

@end
