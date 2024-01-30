@class NSDictionary;

@interface PLQLDuetInMemoryCache : NSObject

@property (retain) NSDictionary *startArgs;
@property (retain) NSDictionary *stopArgs;
@property double startTime;
@property double stopTime;
@property double cellIn;
@property double cellOut;
@property double wifiIn;
@property double wifiOut;
@property int refCount;

- (id)init;
- (void).cxx_destruct;
- (void)addDataWithCellIn:(double)a0 withCellOut:(double)a1 withWifiIn:(double)a2 withWifiOut:(double)a3;
- (void)addStartEvent:(double)a0 withArgs:(id)a1;
- (void)addStopEvent:(double)a0 withArgs:(id)a1;
- (void)clearStop;
- (id)initWithStartTime:(double)a0 withStartargs:(id)a1;
- (BOOL)isStartPresent;
- (BOOL)isStopPresent;
- (void)updateDataStats:(id)a0;

@end
