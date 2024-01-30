@class NSArray;

@interface MCAPNPayload : MCPayload {
    NSArray *_apnInfos;
}

@property (nonatomic) BOOL wasInstalled;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)apnDomainName;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (void).cxx_destruct;
- (id)subtitle2Description;
- (id)verboseDescription;
- (id)apnDefaults;
- (id)_strippedAPNDefaults;
- (id)_validationErrorType:(long long)a0 forInvalidKey:(id)a1;
- (BOOL)_checkForValidContents:(id)a0 outError:(id *)a1;
- (void)_finishInitializationWithContents:(id)a0;

@end
