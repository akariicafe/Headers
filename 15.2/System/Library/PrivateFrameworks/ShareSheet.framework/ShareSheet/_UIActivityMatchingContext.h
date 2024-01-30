@class NSArray, NSString, NSData, UIActivity;

@interface _UIActivityMatchingContext : NSObject <NSCopying>

@property (nonatomic) const struct { unsigned int x0[8]; } *hostAuditToken;
@property (readonly, nonatomic) NSData *hostAuditTokenData;
@property (nonatomic) BOOL allowMatchingBuiltInActivities;
@property (nonatomic) BOOL allowMatchingExtensionActivities;
@property (retain, nonatomic) NSArray *externalMatchBuiltinOrderedActivities;
@property (copy, nonatomic) NSArray *activityTypesGeneratedByDelegate;
@property (readonly, nonatomic) NSArray *activityItems;
@property (readonly, nonatomic) NSArray *activityItemValues;
@property (retain, nonatomic) NSArray *activityItemValueClasses;
@property (retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries;
@property (nonatomic) BOOL isContentManaged;
@property (readonly, nonatomic) NSString *sourceApplicationIdentifier;
@property (nonatomic) BOOL shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) BOOL shouldExcludeiCloudAddToDriveActivity;
@property (nonatomic) BOOL shouldExcludeiCloudSharingActivity;
@property (nonatomic) BOOL canExcludeExtensionActivities;
@property (nonatomic) BOOL whitelistActionActivitiesOnly;
@property (retain, nonatomic) NSArray *activityTypeOrder;
@property (retain, nonatomic) NSArray *includedActivityTypes;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic) long long sharingStyle;
@property (retain, nonatomic) UIActivity *currentlySelectedActivity;
@property (retain, nonatomic) NSArray *applicationActivities;
@property (retain, nonatomic) NSArray *prematchedExtensionActivities;

- (id)initWithActivityItems:(id)a0 itemValues:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHostAuditToken:(const struct { unsigned int x0[8]; } *)a0;
- (BOOL)shouldExcludeActivity:(id)a0;
- (const struct { unsigned int x0[8]; } *)hostAuditToken;
- (id)activitiesByFilteringExcludedActivities:(id)a0;

@end
