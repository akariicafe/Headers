@class UIVibrancyEffect, NSArray, UIBlurEffect, UIColor, UIImage, _UIBarBackgroundAppearanceData;
@protocol _UIBarAppearanceChangeObserver;

@interface UIBarAppearance : NSObject <NSCopying, NSSecureCoding> {
    id<_UIBarAppearanceChangeObserver> _changeObserver;
    _UIBarBackgroundAppearanceData *_backgroundData;
    long long _batchedChanges;
    BOOL _batchingChanges;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL _hasTransparentBackground;
@property (copy, nonatomic, setter=_setSelectedItemVibrancyEffect:) UIVibrancyEffect *_selectedItemVibrancyEffect;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect;
@property (readonly, nonatomic) long long idiom;
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (copy, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIImage *shadowImage;

- (id)_stackedTabButtonAppearanceData;
- (void)configureWithTransparentBackground;
- (void)_decodeFromCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)configureWithoutShadow;
- (void)_describeInto:(id)a0;
- (void)configureWithDefaultBackground;
- (id)initWithBarAppearance:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)configureWithOpaqueBackground;
- (void)_setupDefaults;
- (id)_doneButtonAppearance;
- (id)_barTitleData;
- (id)_backgroundData;
- (void)configureWithDefaultShadow;
- (id)initWithIdiom:(long long)a0;
- (id)_backButtonAppearance;
- (void)_copyFromAppearance:(id)a0;
- (BOOL)_checkEqualTo:(id)a0;
- (id)_backButtonAppearanceData;
- (id)_inlineTabButtonAppearanceData;
- (id)_plainButtonAppearanceData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_compactInlineTabButtonAppearanceData;
- (id)_plainButtonAppearance;
- (void)_completeInit;
- (id)_doneButtonAppearanceData;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (id)_tabLayoutAppearanceData;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copy;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
