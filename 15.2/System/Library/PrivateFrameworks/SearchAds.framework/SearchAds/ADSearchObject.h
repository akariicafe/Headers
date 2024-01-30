@class NSString, NSArray, NSError, APOdmlReranker, ADDESRecordsManager;

@interface ADSearchObject : NSObject

@property (retain, nonatomic) NSString *sponsoredSearchRequestData;
@property (retain, nonatomic) NSString *routingInfoData;
@property (retain, nonatomic) NSString *deviceRequestID;
@property (retain, nonatomic) NSString *userTargetingID;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) APOdmlReranker *reranker;
@property (nonatomic) double SLA;
@property (readonly, nonatomic) unsigned long long ident;
@property (retain, nonatomic) ADDESRecordsManager *desRecordManager;
@property (retain, nonatomic) NSArray *advertisements;
@property (retain, nonatomic) NSArray *organics;
@property (retain, nonatomic) NSArray *organicsIds;

- (long long)selectAdResponse;
- (id)initWithSponsoredSearchRequestData:(id)a0 routingInfoData:(id)a1 deviceRequestID:(id)a2 userTargetingID:(id)a3 error:(id)a4;
- (void)orderedAds:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
