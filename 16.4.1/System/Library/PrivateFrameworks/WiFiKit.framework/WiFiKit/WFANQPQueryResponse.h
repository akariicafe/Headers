@class NSArray, CWFScanResult, NSString;

@interface WFANQPQueryResponse : NSObject

@property (copy, nonatomic) NSArray *cellNetworkInfo;
@property (retain, nonatomic) NSArray *roamingConsortium;
@property (retain, nonatomic) NSArray *domains;
@property (copy, nonatomic) CWFScanResult *scanResult;
@property (copy, nonatomic) NSString *ssid;
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSString *operatorName;
@property long long channel;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithScanResult:(id)a0 ANQPResponse:(id)a1;
- (BOOL)isEqualToWFANQPResponse:(id)a0;

@end
