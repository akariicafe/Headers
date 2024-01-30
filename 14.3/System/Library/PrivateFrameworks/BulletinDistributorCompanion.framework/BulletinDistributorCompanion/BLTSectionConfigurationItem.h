@class NSArray, NSNumber, NSMutableDictionary;

@interface BLTSectionConfigurationItem : NSObject

@property unsigned long long coordinationType;
@property (nonatomic) BOOL optOutOfAttachmentTransmission;
@property (nonatomic) BOOL alwaysSyncSettings;
@property (retain, nonatomic) NSArray *whitelistedSubtypes;
@property (retain, nonatomic) NSArray *blacklistedCategories;
@property (retain, nonatomic) NSArray *whitelistedCategories;
@property (nonatomic) BOOL alwaysAlert;
@property (nonatomic) BOOL optOutOfWaitForUserIdle;
@property (nonatomic) BOOL applyWhitelistToChildSections;
@property (nonatomic) BOOL optOutOfNotificationTuning;
@property (nonatomic) BOOL hasLegacyMapInUserInfo;
@property (nonatomic) BOOL hasLegacyMapInContext;
@property (retain, nonatomic) NSNumber *watchVersionThatUsesUserInfoForContext;
@property (retain, nonatomic) NSArray *additionalBridgeSectionIDs;
@property (nonatomic) BOOL optOutOfSubtitleRemovalForOlderWatches;
@property (nonatomic) BOOL shouldUsePhoneExpirationDate;
@property (nonatomic) BOOL optOutOfSettingsCoordination;
@property (nonatomic) BOOL overrideAppliesToCoordinationOptOut;
@property (retain, nonatomic) NSNumber *watchVersionThatUsesAttachmentURL;
@property (retain, nonatomic) NSMutableDictionary *blacklistedCategoriesWithVersion;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)coordinationTypeWithSubtype:(long long)a0;
- (BOOL)hasDisplayedCriticalBulletins;
- (BOOL)updateCoordinationType:(unsigned long long)a0;

@end
