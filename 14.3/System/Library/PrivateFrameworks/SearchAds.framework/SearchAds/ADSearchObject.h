@class NSString, NSArray, NSError, APOdmlReranker;

@interface ADSearchObject : NSObject

@property (retain, nonatomic) NSString *sponsoredSearchRequestData;
@property (retain, nonatomic) NSString *routingInfoData;
@property (retain, nonatomic) NSString *deviceRequestID;
@property (retain, nonatomic) NSString *userTargetingID;
@property (retain, nonatomic) NSString *searchRequestID;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) APOdmlReranker *reranker;
@property (nonatomic) double SLA;
@property (retain, nonatomic) NSArray *advertisements;
@property (retain, nonatomic) NSArray *organics;

- (id)init;
- (void).cxx_destruct;
- (void)selectAdResponse;
- (id)initWithSponsoredSearchRequestData:(id)a0 routingInfoData:(id)a1 deviceRequestID:(id)a2 userTargetingID:(id)a3 error:(id)a4;
- (void)orderedAds:(id /* block */)a0;

@end
