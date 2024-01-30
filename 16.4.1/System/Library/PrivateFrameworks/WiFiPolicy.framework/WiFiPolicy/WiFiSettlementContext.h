@class NSArray, NSSet, NSDate;

@interface WiFiSettlementContext : NSObject

@property (retain, nonatomic) NSArray *strongestNetworks;
@property (retain, nonatomic) NSSet *strongestBSSIDs;
@property (nonatomic) unsigned long long maxCount;
@property (retain, nonatomic) NSDate *creationDate;

+ (BOOL)networkQualifiesForSettlement:(id)a0;

- (void)updateNetworks:(id)a0;
- (id)initWithNetworks:(id)a0 maxCount:(unsigned long long)a1;
- (BOOL)compareWithScanResults:(id)a0;
- (void)_updateStrongestNetworks:(id)a0;
- (void).cxx_destruct;

@end
