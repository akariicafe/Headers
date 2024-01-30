@class NSDictionary, NSError, APOdmlServerResponse;

@interface ADDataObject : NSObject

@property (copy, nonatomic) NSDictionary *adData;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *dupAdResponse;
@property (retain, nonatomic) NSDictionary *noOrganicAdResponse;
@property (retain, nonatomic) NSDictionary *normalAdResponse;
@property long long adResponseInUseType_Int;
@property (readonly) NSDictionary *adResponseInUse;
@property long long adResponseInUseType;
@property (readonly) APOdmlServerResponse *odmlResponse;
@property (readonly) NSDictionary *allOdmlResponses;

+ (id)adResponseTypeToString:(long long)a0;

- (void)updateAdDataWithLocationState:(BOOL)a0 personalizedAdsState:(BOOL)a1;
- (id)parseDataForODMLResponse:(id)a0;
- (id)parseDataForAdResponse:(id)a0;
- (id)initWith:(id)a0 andError:(id)a1;
- (id)_jsonToDict:(id)a0 error:(id *)a1;
- (void)parseResponseData;
- (void).cxx_destruct;

@end
