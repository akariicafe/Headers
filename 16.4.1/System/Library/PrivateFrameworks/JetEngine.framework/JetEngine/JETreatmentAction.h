@class NSString, NSArray, NSDictionary;

@interface JETreatmentAction : NSObject {
    BOOL _blacklisted;
    NSString *_field;
    NSString *_sourceField;
    id _overrideFieldValue;
    NSArray *_blacklistedFields;
    NSArray *_whitelistedFields;
    NSDictionary *_fieldsMap;
    NSDictionary *_extractAndReplaceConfig;
    NSArray *_destinationKeyPath;
    NSArray *_sourceKeyPath;
}

+ (id)treatmentActionWithField:(id)a0 configuration:(id)a1 topic:(id)a2;

- (void).cxx_destruct;
- (void)performActionWithContext:(id)a0;
- (id)initWithField:(id)a0 configuration:(id)a1;
- (id)performAction:(id)a0 context:(id)a1;

@end
