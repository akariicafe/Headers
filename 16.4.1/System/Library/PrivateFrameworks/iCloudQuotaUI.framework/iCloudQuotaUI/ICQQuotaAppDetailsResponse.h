@class NSMutableArray;

@interface ICQQuotaAppDetailsResponse : AAResponse

@property (readonly, nonatomic) NSMutableArray *apps;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void)addApps:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
