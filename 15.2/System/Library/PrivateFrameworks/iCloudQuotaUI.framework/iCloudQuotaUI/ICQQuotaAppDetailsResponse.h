@class NSMutableArray;

@interface ICQQuotaAppDetailsResponse : AAResponse

@property (readonly, nonatomic) NSMutableArray *apps;

- (void)addApps:(id)a0;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
