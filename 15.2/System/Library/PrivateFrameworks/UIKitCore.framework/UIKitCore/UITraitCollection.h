@class UIColor, NSString, NSDictionary, NSObject;

@interface UITraitCollection : NSObject <_UIFallbackEnvironment, NSCopying, NSSecureCoding> {
    struct { long long userInterfaceIdiom; double displayScale; long long displayGamut; long long touchLevel; unsigned long long interactionModel; unsigned long long primaryInteractionModel; long long artworkSubtype; long long horizontalSizeClass; long long verticalSizeClass; long long userInterfaceStyle; long long layoutDirection; long long forceTouchCapability; long long preferredContentSizeCategory; double displayCornerRadius; long long legibilityWeight; long long semanticContext; long long presentationSemanticContext; long long splitViewControllerContext; long long accessibilityContrast; long long userInterfaceLevel; long long vibrancy; long long activeAppearance; long long focusSystemState; long long selectionFollowsFocus; } _builtinTraits;
    NSDictionary *_clientDefinedTraits;
    NSObject *_environmentWrapper;
    UIColor *_tintColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _isLargeContentViewerEnabled;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) long long horizontalSizeClass;
@property (readonly, nonatomic) long long verticalSizeClass;
@property (readonly, nonatomic) long long forceTouchCapability;
@property (readonly, copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic) long long displayGamut;
@property (readonly, nonatomic) long long accessibilityContrast;
@property (readonly, nonatomic) long long userInterfaceLevel;
@property (readonly, nonatomic) long long legibilityWeight;
@property (readonly, nonatomic) long long activeAppearance;

+ (id)_descriptionForChangeFromTraitCollection:(id)a0 toTraitCollection:(id)a1;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)a0;
+ (id)_traitCollectionWithFocusSystemState:(long long)a0;
+ (id)traitCollectionWithTraitsFromCollections:(id)a0;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)a0;
+ (id)_traitCollectionWithSplitViewControllerContext:(long long)a0;
+ (id)traitCollectionWithUserInterfaceStyle:(long long)a0;
+ (id)_traitCollectionWithVibrancy:(long long)a0;
+ (id)traitCollectionWithActiveAppearance:(long long)a0;
+ (id)currentTraitCollection;
+ (id)traitCollectionWithAccessibilityContrast:(long long)a0;
+ (id)traitCollectionWithUserInterfaceLevel:(long long)a0;
+ (id)traitCollectionWithDisplayGamut:(long long)a0;
+ (void)setCurrentTraitCollection:(id)a0;
+ (id)traitCollectionWithLayoutDirection:(long long)a0;
+ (id)_currentTraitCollection;
+ (id)traitCollectionWithDisplayCornerRadius:(double)a0;
+ (id)traitCollectionWithLegibilityWeight:(long long)a0;
+ (id)_traitCollectionWithUserInterfaceActiveAppearance:(long long)a0;
+ (id)traitCollectionWithTouchLevel:(long long)a0;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)a0;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)a0;
+ (id)traitCollectionWithArtworkSubtype:(unsigned long long)a0;
+ (id)_traitCollectionWithPresentationSemanticContext:(long long)a0;
+ (id)_traitCollectionForSidebarAppearance;
+ (id)_traitCollectionWithContrast:(long long)a0;
+ (id)_traitCollectionWithBackgroundLevel:(long long)a0;
+ (id)_traitCollectionWithEnvironmentWrapper:(id)a0;
+ (id)_traitCollectionWithValue:(id)a0 forTraitNamed:(id)a1;
+ (id)traitCollectionWithDisplayScale:(double)a0;
+ (void)_setCurrentTraitCollection:(id)a0;
+ (id)traitCollectionWithForceTouchCapability:(long long)a0;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)a0;
+ (id)traitCollectionWithVerticalSizeClass:(long long)a0;

- (BOOL)hasDifferentColorAppearanceComparedToTraitCollection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_vibrancy;
- (long long)_compare:(id)a0;
- (id)_namedImageDescription;
- (double)displayCornerRadius;
- (long long)_contrast;
- (BOOL)_hasSplitViewControllerContextSidebarColumn;
- (id)imageConfiguration;
- (long long)touchLevel;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_hasSplitViewControllerContextPrimaryColumn;
- (long long)_focusSystemState;
- (id)_valueForTraitNamed:(id)a0;
- (long long)_splitViewControllerContext;
- (unsigned long long)primaryInteractionModel;
- (long long)_backgroundLevel;
- (id)_environmentWrapper;
- (id)_traitsDescription;
- (id)_traitNamesForUnspecifiedBuiltInTraits;
- (long long)_userInterfaceActiveAppearance;
- (void)performAsCurrentTraitCollection:(id /* block */)a0;
- (id)_description;
- (id)_fallbackTraitCollection;
- (unsigned long long)interactionModel;
- (void)dealloc;
- (BOOL)containsTraitsInCollection:(id)a0;
- (unsigned long long)artworkSubtype;
- (long long)_presentationSemanticContext;

@end
