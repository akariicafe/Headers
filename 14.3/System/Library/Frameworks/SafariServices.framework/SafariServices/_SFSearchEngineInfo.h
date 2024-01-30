@class NSString;

@interface _SFSearchEngineInfo : WBSSearchProvider

@property (readonly, nonatomic) int searchID;
@property (readonly, nonatomic) NSString *scriptName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) int resultType;
@property (readonly, nonatomic) unsigned long long endpointType;

+ (int)_resultTypeForShortName:(id)a0;
+ (id)engineFromDictionary:(id)a0 withController:(id)a1;
+ (unsigned long long)_endpointTypeForShortName:(id)a0;
+ (BOOL)shouldIncludeEngineFromDictionary:(id)a0 withController:(id)a1;

- (BOOL)searchShouldUseSafeSearchTemplate;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 scriptName:(id)a1 searchID:(int)a2 searchTemplate:(id)a3 hostSuffixes:(id)a4 pathPrefixes:(id)a5 usesSearchTermsFromFragment:(BOOL)a6 groupIdentifierQueryStringKey:(id)a7 suggestionsTemplate:(id)a8 topLevelDomains:(id)a9 safeSearchSuffix:(id)a10 safeSearchURLQueryParameters:(id)a11 carrierInfo:(id)a12 controller:(id)a13;
- (id)description;
- (Class)classForCoder;

@end
