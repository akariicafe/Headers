@class NSNumber;

@interface PLDisplayAZLStats : NSObject

@property (retain) NSNumber *AvgPower;
@property (retain) NSNumber *azlAccum;
@property (retain) NSNumber *nitsAccum;
@property (retain) NSNumber *blUpdateCount;
@property (retain) NSNumber *blFrameCount;

- (void).cxx_destruct;

@end
