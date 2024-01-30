@class NSString;

@interface GEOTrafficAndETAResult : NSObject

@property (nonatomic) BOOL isSuccess;
@property (nonatomic) double seconds;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic) double conservativeTravelTime;
@property (copy, nonatomic) NSString *shortTrafficString;
@property (copy, nonatomic) NSString *longTrafficString;
@property (copy, nonatomic) NSString *writtenRouteName;
@property (copy, nonatomic) NSString *spokenRouteName;

- (void).cxx_destruct;

@end
