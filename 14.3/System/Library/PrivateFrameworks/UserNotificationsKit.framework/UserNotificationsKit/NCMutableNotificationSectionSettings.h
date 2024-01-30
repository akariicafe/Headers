@class NSString, NSDictionary, NSSet, UIImage;

@interface NCMutableNotificationSectionSettings : NCNotificationSectionSettings

@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *subSectionIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSSet *subSectionSettings;
@property (nonatomic, getter=isUserConfigurable) BOOL userConfigurable;
@property (retain, nonatomic) UIImage *settingsIcon;
@property (nonatomic) BOOL showsCustomSettingsLink;
@property (nonatomic) BOOL isDeliveredQuietly;
@property (nonatomic) BOOL hasProvisionalAuthorization;
@property (nonatomic) BOOL isAppClip;

- (void)setIsAppClip:(BOOL)a0;
- (void)setSubSectionSettings:(id)a0;
- (void)setSectionIdentifier:(id)a0;
- (void)setSubSectionIdentifier:(id)a0;
- (void)setDisplayName:(id)a0;
- (void)setHasProvisionalAuthorization:(BOOL)a0;
- (void)setIsDeliveredQuietly:(BOOL)a0;
- (void)setUserConfigurable:(BOOL)a0;
- (void)setShowsCustomSettingsLink:(BOOL)a0;
- (void)setSettings:(id)a0;
- (void)setSettingsIcon:(id)a0;

@end
