@class NSString, ACCMemUsageStatInfo, NSMutableDictionary;

@interface ACCMemUsageStat : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) ACCMemUsageStatInfo *statInfo;
@property (readonly, nonatomic) NSMutableDictionary *markList;

- (id)initWithName:(id)a0;
- (BOOL)update;
- (void)mark:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)getMark:(id)a0;
- (void)removeMark:(id)a0;
- (double)timeIntervalSinceLastUpdate;
- (double)timeIntervalSinceMark:(id)a0;
- (double)timeIntervalSinceStart;

@end
