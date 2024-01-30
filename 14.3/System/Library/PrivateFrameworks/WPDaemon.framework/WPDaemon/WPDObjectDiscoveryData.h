@class NSMutableData;

@interface WPDObjectDiscoveryData : NSObject

@property (retain, nonatomic) NSMutableData *address;
@property (retain, nonatomic) NSMutableData *payload;
@property (nonatomic) long long length;

+ (unsigned char)applyMaskToAddress:(id)a0;
+ (id)addressFromNearbyToken:(id)a0;
+ (id)objectDiscoveryReportFromAdvReport:(id)a0;
+ (id)addressesFromNearbyTokens:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)wipeout;
- (id)updateWithKey:(id)a0 Status:(unsigned char)a1 Reserved:(id)a2;

@end
