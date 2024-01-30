@class NSString, ACCMemUsageStatInfo, NSMutableDictionary;

@interface ACCMemUsageStat : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) ACCMemUsageStatInfo *statInfo;
@property (readonly, nonatomic) NSMutableDictionary *markList;

- (id)init;
- (void).cxx_destruct;
- (void)mark:(id)a0;
- (BOOL)update;
- (id)description;
- (id)initWithName:(id)a0;
- (double)timeIntervalSinceStart;
- (double)timeIntervalSinceLastUpdate;
- (id)getMark:(id)a0;
- (void)removeMark:(id)a0;
- (double)timeIntervalSinceMark:(id)a0;

@end
