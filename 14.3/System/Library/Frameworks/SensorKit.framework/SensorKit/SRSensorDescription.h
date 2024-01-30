@class NSString, NSArray, NSSet;

@interface SRSensorDescription : NSObject {
    NSString *_name;
    NSString *_authorizationService;
    NSString *_writerBundleIdentifier;
    NSArray *_relatedSettingsCategories;
    NSString *_publicEntitlementValue;
    NSString *_localizedAdditionalSampleDataNote;
    NSString *_infoPlistAuthorizationCategory;
    NSString *_sampleClass;
    NSString *_exportingSampleClass;
    NSSet *_additions;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;

@end
