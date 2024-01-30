@class NSString, NSDate;

@interface BMAppActivity : BMEventBase <BMStoreData> {
    BOOL _hasRaw_expirationDate;
    double _raw_expirationDate;
}

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) BOOL beginningOfActivity;
@property (nonatomic) BOOL hasBeginningOfActivity;
@property (readonly, nonatomic) NSString *contentDescription;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isEligibleForPrediction;
@property (nonatomic) BOOL hasIsEligibleForPrediction;
@property (readonly, nonatomic) BOOL isPubliclyIndexable;
@property (nonatomic) BOOL hasIsPubliclyIndexable;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSString *itemRelatedContentURL;
@property (readonly, nonatomic) NSString *itemRelatedUniqueIdentifier;
@property (readonly, nonatomic) int shortcutAvailability;
@property (nonatomic) BOOL hasShortcutAvailability;
@property (readonly, nonatomic) NSString *suggestedInvocationPhrase;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *userActivityRequiredString;
@property (readonly, nonatomic) NSString *userActivityUUID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 activityType:(id)a1 beginningOfActivity:(id)a2 contentDescription:(id)a3 expirationDate:(id)a4 isEligibleForPrediction:(id)a5 isPubliclyIndexable:(id)a6 itemIdentifier:(id)a7 itemRelatedContentURL:(id)a8 itemRelatedUniqueIdentifier:(id)a9 shortcutAvailability:(id)a10 suggestedInvocationPhrase:(id)a11 title:(id)a12 userActivityRequiredString:(id)a13 userActivityUUID:(id)a14;

@end
