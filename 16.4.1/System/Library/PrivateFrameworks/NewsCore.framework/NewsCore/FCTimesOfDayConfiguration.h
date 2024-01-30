@class FCTimeOfDayConfiguration;

@interface FCTimesOfDayConfiguration : NSObject

@property (readonly, nonatomic) FCTimeOfDayConfiguration *morningTimeOfDayConfiguration;
@property (readonly, nonatomic) FCTimeOfDayConfiguration *afternoonTimeOfDayConfiguration;
@property (readonly, nonatomic) FCTimeOfDayConfiguration *eveningTimeOfDayConfiguration;
@property (readonly, nonatomic) FCTimeOfDayConfiguration *nightTimeOfDayConfiguration;

+ (id)defaultConfiguration;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
