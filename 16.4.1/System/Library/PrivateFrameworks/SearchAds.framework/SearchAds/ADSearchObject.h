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

- (void)orderedAdsWithIDs:(id /* block */)a0;
- (BOOL)isAppInstalled:(unsigned long long)a0;
- (id)updatedWithTransparencyRenderingData:(id)a0;
- (id)initWithSponsoredSearchRequestData:(id)a0 routingInfoData:(id)a1 deviceRequestID:(id)a2 userTargetingID:(id)a3 error:(id)a4;
- (void)orderedAds:(id /* block */)a0;
- (void)addFeaturesToAdvertisements;
- (id)init;
- (void).cxx_destruct;

@end
