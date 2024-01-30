@class NSString, NSMutableDictionary;

@interface MCRestrictionsPayload : MCPayload {
    NSMutableDictionary *_restrictions;
}

@property (retain, nonatomic) NSString *iCloudPassword;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)filterForUserEnrollmentOutError:(id *)a0;
- (id)_invalidFieldErrorWithFieldName:(id)a0;
- (id)_restrictedFeatureStrings;
- (id)_enforcedFeatureStrings;
- (id)_defaultValueRestrictions;
- (id)_intersectionStrings;
- (id)_unionStrings;
- (id)localizedRestrictionStrings;
- (void)_insertRestrictedBoolForKey:(id)a0 value:(id)a1 preferenc:(BOOL)a2;
- (id)restrictions;

@end
