@class NSString, NSArray, NSSet, NSDictionary;

@interface SRSensorDescription : NSObject {
    NSString *_sampleClass;
    NSString *_exportingSampleClass;
    NSSet *_additions;
    NSDictionary *_supportedPlatforms;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *authorizationService;
@property (readonly, copy) NSString *writerBundleIdentifier;
@property (readonly, copy) NSArray *relatedSettingsCategories;
@property (readonly, copy) NSString *publicEntitlementValue;
@property (readonly, copy) NSString *sampleClass;
@property (readonly, copy) NSString *exportingSampleClass;
@property (readonly, copy) NSString *localizedAdditionalSampleDataNote;
@property (readonly, copy) NSString *infoPlistAuthorizationCategory;
@property (readonly) BOOL metadataEnabled;
@property (readonly) BOOL sensorConfigurationEnabled;
@property (readonly, copy) NSString *writerAuthorizationService;
@property (readonly) long long authorizationVersion;
@property (readonly, copy) NSString *onDemandWriterService;
@property (readonly) BOOL supportsCurrentPlatform;
@property (readonly, copy) NSString *authorizationStoreCohort;

+ (void)initialize;
+ (id)sensorDescriptionForSensor:(id)a0;
+ (id)sensorDescriptionsForAuthorizationService:(id)a0;
+ (id)sensorDescriptionForDeletionRecordFromDescription:(id)a0;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (BOOL)supportsPlatform:(id)a0;

@end
