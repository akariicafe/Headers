@class ICPlayInfoResponse, NSString, NSArray, NSData, NSNumber, ICStoreRequestContext;

@interface ICPlayInfoRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    ICPlayInfoResponse *_response;
}

@property (copy, nonatomic) NSString *playerGUID;
@property (copy, nonatomic) NSData *SICData;
@property (copy, nonatomic) NSArray *sinfs;
@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSNumber *contentIdentifier;
@property (copy, nonatomic) NSString *subscriptionPlaybackType;

- (void)execute;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0;
- (id)_getSinfParamValue:(int)a0;
- (BOOL)_hasRentalInfo;

@end
