@class NSString, ACCMemUsageStatInfo, NSMutableDictionary;

@interface ACCMemUsageStat : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) ACCMemUsageStatInfo *statInfo;
@property (readonly, nonatomic) NSMutableDictionary *markList;

- (id)init;
- (BOOL)update;
- (id)initWithName:(id)a0;
- (void)mark:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)getMark:(id)a0;
- (void)removeMark:(id)a0;
- (double)timeIntervalSinceLastUpdate;
- (double)timeIntervalSinceMark:(id)a0;
- (double)timeIntervalSinceStart;

@end
