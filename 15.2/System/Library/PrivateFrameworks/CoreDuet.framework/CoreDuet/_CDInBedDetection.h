@class NSDate;

@interface _CDInBedDetection : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property double confidence;

- (void).cxx_destruct;
- (double)duration;

@end
