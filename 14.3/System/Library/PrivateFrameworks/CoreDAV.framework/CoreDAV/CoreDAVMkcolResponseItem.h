@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addPropStat:(id)a0;
- (BOOL)hasPropertyError;

@end
