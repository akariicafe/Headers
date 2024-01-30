@class NSDate;
@protocol NSObject;

@interface WLTimeEstimateSample : NSObject

@property (nonatomic) unsigned long long estimate;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long threshold;
@property (retain, nonatomic) id<NSObject> associatedObject;

- (void).cxx_destruct;

@end
