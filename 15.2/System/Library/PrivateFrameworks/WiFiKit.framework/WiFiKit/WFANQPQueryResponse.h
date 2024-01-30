@class NSArray, WFNetworkProfile, NSString;

@interface WFANQPQueryResponse : NSObject

@property (copy, nonatomic) NSArray *cellNetworkInfo;
@property (retain, nonatomic) NSArray *roamingConsortium;
@property (retain, nonatomic) NSArray *domains;
@property (copy, nonatomic) WFNetworkProfile *profile;
@property (copy, nonatomic) NSString *ssid;
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSString *operatorName;
@property long long channel;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithProfile:(id)a0 ANQPResponse:(id)a1;
- (BOOL)isEqualToWFANQPResponse:(id)a0;

@end
