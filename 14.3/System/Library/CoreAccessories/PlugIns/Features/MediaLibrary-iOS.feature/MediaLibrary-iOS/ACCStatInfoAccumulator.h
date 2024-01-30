@class NSString, NSDate;

@interface ACCStatInfoAccumulator : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *lastUpdateTime;
@property (readonly, nonatomic) unsigned long long start;
@property (readonly, nonatomic) unsigned long long max;
@property (readonly, nonatomic) unsigned long long last;
@property (readonly, nonatomic) unsigned long long accum;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long average;

- (void)add:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (void)set:(id)a0;
- (id)initWithName:(id)a0;
- (double)timeIntervalSinceStart;
- (double)timeIntervalSinceLastUpdate;
- (id)initWithName:(id)a0 initValue:(unsigned long long)a1;

@end
