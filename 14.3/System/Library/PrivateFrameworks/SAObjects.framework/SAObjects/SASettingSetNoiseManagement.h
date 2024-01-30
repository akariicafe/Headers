@class NSString;

@interface SASettingSetNoiseManagement : SASettingSetValue

@property (copy, nonatomic) NSString *noiseManagementOption;

+ (id)setNoiseManagement;
+ (id)setNoiseManagementWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
