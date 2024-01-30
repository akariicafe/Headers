@class NSString, NSDate;

@interface PLNetworkUsageSnapshot : NSObject

@property (retain) NSDate *timestamp;
@property (retain) NSString *cellType;
@property (retain) NSString *quality;
@property (retain) NSString *wifi;

- (id)initWithInfo:(id)a0;
- (id)description;
- (double)computeEnergyDiff:(id)a0;
- (void).cxx_destruct;
- (void)snapshotNetworkState;
- (double)computeEnergyDiffUntilNow:(BOOL)a0;

@end
