@class NSMutableArray;

@interface MRExternalDeviceMessageMetricsEntry : NSObject

@property (nonatomic) unsigned long long avg;
@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long max;
@property (nonatomic) unsigned long long total;
@property (retain, nonatomic) NSMutableArray *values;

- (void)updateWithValue:(unsigned long long)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
