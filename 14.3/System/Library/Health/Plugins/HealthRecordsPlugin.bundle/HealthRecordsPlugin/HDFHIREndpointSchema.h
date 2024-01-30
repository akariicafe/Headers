@class NSString, NSArray, NSDictionary, NSURL, HDClinicalGateway;

@interface HDFHIREndpointSchema : NSObject <NSCopying>

@property (readonly, nonatomic) long long authType;
@property (readonly, copy, nonatomic) NSString *method;
@property (readonly, copy, nonatomic) NSArray *bodyParameters;
@property (readonly, copy, nonatomic) NSArray *headerParameters;
@property (readonly, copy, nonatomic) NSArray *queryParameters;
@property (readonly, copy, nonatomic) NSDictionary *definition;
@property (readonly, copy, nonatomic) HDClinicalGateway *gateway;
@property (readonly, copy, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)validateName:(id)a0 error:(out id *)a1;
+ (id)schemaWithDefinition:(id)a0 gateway:(id)a1 error:(out id *)a2;
+ (BOOL)validateDefinition:(id)a0 error:(out id *)a1;
+ (id)_queryItemsFromParametersArray:(id)a0 bindings:(id)a1 queryMode:(long long)a2 error:(out id *)a3;
+ (id)_percentEncodedQueryStringFromQueryItems:(id)a0 additionalEncodableCharacters:(id)a1;
+ (id)_requiredRootKeys;
+ (BOOL)_validateRootKey:(id)a0 value:(id)a1 error:(id *)a2;
+ (BOOL)_validateAuthValue:(id)a0 error:(out id *)a1;
+ (BOOL)_validateParameterArray:(id)a0 error:(out id *)a1;
+ (BOOL)_validateMethodValue:(id)a0 error:(out id *)a1;
+ (BOOL)_validateNameValue:(id)a0 error:(out id *)a1;
+ (BOOL)_validateURLValue:(id)a0 error:(out id *)a1;
+ (BOOL)_validateParameterItem:(id)a0 error:(out id *)a1;
+ (BOOL)_validateQueryMode:(id)a0 error:(out id *)a1;
+ (BOOL)_queryItemsShouldIncludeParameterItem:(id)a0 queryMode:(long long)a1;
+ (id)_valueForParameterItem:(id)a0 bindings:(id)a1 error:(out id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createRequestWithCredential:(id)a0 requestURL:(id)a1 error:(out id *)a2;
- (id)createRequestWithCredential:(id)a0 bindings:(id)a1 queryMode:(long long)a2 error:(out id *)a3;
- (id)createRequestWithBindings:(id)a0 queryMode:(long long)a1 error:(out id *)a2;
- (id)currentScopeStringWithError:(id *)a0;
- (id)initWithDefinition:(id)a0 gateway:(id)a1;
- (id)_createRequestWithCredential:(id)a0 bindings:(id)a1 orFullURL:(id)a2 queryMode:(long long)a3 error:(out id *)a4;
- (id)_bindingsWithCredential:(id)a0;
- (id)_URLWithBindings:(id)a0 queryMode:(long long)a1 error:(out id *)a2;
- (BOOL)_applyAuthToRequest:(id)a0 credential:(id)a1 error:(out id *)a2;
- (BOOL)_applyHeadersToRequest:(id)a0 bindings:(id)a1 queryMode:(long long)a2 error:(out id *)a3;
- (BOOL)_addHTTPBodyToRequest:(id)a0 bindings:(id)a1 queryMode:(long long)a2 error:(out id *)a3;

@end
