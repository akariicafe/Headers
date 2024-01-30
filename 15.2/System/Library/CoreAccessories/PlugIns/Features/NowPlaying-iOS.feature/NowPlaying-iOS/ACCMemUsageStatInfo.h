@class NSString, ACCStatInfoAccumulator, NSDate;

@interface ACCMemUsageStatInfo : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *lastUpdateTime;
@property (readonly, nonatomic) ACCStatInfoAccumulator *residentMem;
@property (readonly, nonatomic) ACCStatInfoAccumulator *virtualMem;
@property (readonly, nonatomic) ACCStatInfoAccumulator *physFootprintMem;

- (void)setInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)initWithName:(id)a0 andInfo:(id)a1;
- (void)updateResident:(unsigned long long)a0 virtualValue:(unsigned long long)a1 physFootprintValue:(unsigned long long)a2;
- (double)timeIntervalSinceStart;
- (double)timeIntervalSinceLastUpdate;

@end
