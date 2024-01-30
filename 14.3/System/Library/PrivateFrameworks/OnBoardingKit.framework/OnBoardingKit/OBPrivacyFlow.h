@class NSString, NSArray, NSBundle, NSDictionary, OBImage;

@interface OBPrivacyFlow : OBFlow {
    NSBundle *_bundle;
    NSString *_splashContentName;
    NSDictionary *_splashPlist;
    BOOL _buttonIconLoaded;
    OBImage *_buttonIcon;
    NSString *_buttonTitle;
    NSString *_buttonCaption;
    NSString *_splashTitle;
    NSString *_splashShortTitle;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long contentVersion;
@property (readonly, nonatomic) BOOL platformSupported;
@property (readonly, nonatomic) BOOL showInCombinedList;
@property (readonly, nonatomic, getter=isPersonallyIdentifiable) BOOL personallyIdentifiable;
@property (readonly, nonatomic) OBImage *buttonIcon;
@property (readonly, nonatomic) NSString *localizedButtonTitle;
@property (readonly, nonatomic) NSString *localizedButtonCaption;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedShortTitle;
@property (readonly, nonatomic) NSArray *localizedContentList;

+ (id)_splashPlistFromBundle:(id)a0 forContentName:(id)a1;
+ (id)flowWithBundle:(id)a0;
+ (id)_modelSpecificLocalizedStringKeyForKey:(id)a0 preferredDeviceType:(unsigned long long)a1;

- (id)_splashLocalizedStringForKey:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)_splashLocalizedStringForKey:(id)a0 language:(id)a1 table:(id)a2 preferredDeviceType:(unsigned long long)a3;
- (id)localizedContentListForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (BOOL)_conformsToRequirements:(id)a0;
- (id)_iconType;
- (id)localizedButtonTitleForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)_splashPlist;
- (id)localizedButtonCaptionForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedTitleForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedShortTitleForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (BOOL)_conformsToRequirement:(id)a0;
- (id)initWithSplashContent:(id)a0;
- (id)_textForConditionalItem:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (void)setButtonIcon:(id)a0;
- (id)_currentPlatform;
- (id)initWithBundle:(id)a0;
- (id)_bundleImageNamed:(id)a0;

@end
