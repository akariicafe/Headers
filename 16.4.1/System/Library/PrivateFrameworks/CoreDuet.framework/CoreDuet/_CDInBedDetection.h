@class NSDate;

@interface _CDInBedDetection : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property double confidence;

- (double)duration;
- (void).cxx_destruct;

@end
