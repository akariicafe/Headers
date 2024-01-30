@class NSArray, NSString;

@interface SASiriKitSetting : AceObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL applySASToFirstPartyDomains;
@property (copy, nonatomic) NSArray *listOfSiriKitEnabledDomains;
@property (nonatomic) BOOL useSASAutoSelectionFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)siriKitSetting;
+ (id)siriKitSettingWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
