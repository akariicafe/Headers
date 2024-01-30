@class NSString;

@interface WDClinicalSampleAccountsParser : NSObject

@property (copy, nonatomic) NSString *accountFilename;

+ (id)_jsonDictionaryFromJSONObject:(id)a0 subElement:(id)a1 error:(id *)a2;
+ (id)_stringOnlyDictionaryFromJSONDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithAccountFilename:(id)a0;
- (id)parsedAccountsWithError:(id *)a0;
- (id)_parseAccountsFromJSONData:(id)a0 error:(id *)a1;
- (id)_parseProviderFromSampleAccountJSONDict:(id)a0 error:(id *)a1;
- (id)_parseBatchesFromSampleAccountJSONDict:(id)a0 error:(id *)a1;
- (id)_parseGatewayFromProviderJSONDict:(id)a0 error:(id *)a1;

@end
