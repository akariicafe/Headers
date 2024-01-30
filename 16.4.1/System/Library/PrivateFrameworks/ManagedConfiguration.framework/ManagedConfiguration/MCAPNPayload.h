@class NSArray;

@interface MCAPNPayload : MCPayload {
    NSArray *_apnInfos;
}

@property (nonatomic) BOOL wasInstalled;

+ (id)localizedPluralForm;
+ (id)apnDomainName;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)verboseDescription;
- (BOOL)_checkForValidContents:(id)a0 outError:(id *)a1;
- (void)_finishInitializationWithContents:(id)a0;
- (id)_strippedAPNDefaults;
- (id)_validationErrorType:(long long)a0 forInvalidKey:(id)a1;
- (id)apnDefaults;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
