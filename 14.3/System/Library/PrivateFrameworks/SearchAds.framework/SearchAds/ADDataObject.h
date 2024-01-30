@class NSDictionary, NSError, ADOdmlResponseV2;

@interface ADDataObject : NSObject {
    NSDictionary *_dupAdResponse;
    NSDictionary *_normalAdResponse;
    NSDictionary *_noOrganicAdResponse;
    ADOdmlResponseV2 *_odmlResponse;
}

@property (copy, nonatomic) NSDictionary *adData;
@property (copy, nonatomic) NSError *error;
@property (readonly) NSDictionary *dupAdResponse;
@property (readonly) NSDictionary *noOrganicAdResponse;
@property (readonly) NSDictionary *normalAdResponse;
@property (readonly) NSDictionary *adResponseInUse;
@property long long adResponseInUseType;
@property (readonly) ADOdmlResponseV2 *odmlResponse;

- (void).cxx_destruct;
- (id)_jsonToDict:(id)a0 error:(id *)a1;
- (id)parseDataForAdResponse:(id)a0;
- (id)parseDataForODMLResponse:(id)a0;
- (id)initWith:(id)a0 andError:(id)a1;

@end
