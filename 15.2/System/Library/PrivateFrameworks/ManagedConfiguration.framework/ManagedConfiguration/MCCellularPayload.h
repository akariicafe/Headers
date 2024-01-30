@class NSArray, MCAPNConfiguration;

@interface MCCellularPayload : MCPayload

@property (retain, nonatomic) MCAPNConfiguration *attachAPN;
@property (retain, nonatomic) NSArray *APNs;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)APNsLabel;
- (id)installationWarnings;
- (id)subtitle2Label;
- (void).cxx_destruct;
- (id)subtitle2Description;
- (id)APNsDescription;
- (id)attachAPNConfigurationLabel;
- (id)APNConfigurationDescription;
- (id)verboseDescription;

@end
