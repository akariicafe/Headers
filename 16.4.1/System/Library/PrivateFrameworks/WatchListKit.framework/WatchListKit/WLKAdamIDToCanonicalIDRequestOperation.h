@class NSString, WLKAdamIDToCanonicalIDResponse;

@interface WLKAdamIDToCanonicalIDRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) NSString *adamId;
@property (retain, nonatomic) WLKAdamIDToCanonicalIDResponse *response;

- (void).cxx_destruct;
- (id)initWithAdamId:(id)a0;
- (void)processResponse;

@end
