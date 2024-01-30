@class NSDictionary, NSError, ADOdmlResponseV2;

@interface ADDataObject : NSObject

@property (copy, nonatomic) NSDictionary *adData;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *dupAdResponse;
@property (retain, nonatomic) NSDictionary *noOrganicAdResponse;
@property (retain, nonatomic) NSDictionary *normalAdResponse;
@property long long adResponseInUseType_Int;
@property (readonly) NSDictionary *adResponseInUse;
@property long long adResponseInUseType;
@property (readonly) ADOdmlResponseV2 *odmlResponse;
@property (readonly) NSDictionary *allOdmlResponses;

+ (id)adResponseTypeToString:(long long)a0;

- (id)parseDataForODMLResponse:(id)a0;
- (id)_jsonToDict:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)parseDataForAdResponse:(id)a0;
- (id)initWith:(id)a0 andError:(id)a1;
- (void)parseResponseData;
- (id)_getAllOdmlResponses;

@end
