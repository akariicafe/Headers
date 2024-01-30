@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (BOOL)hasPropertyError;
- (id)init;
- (id)description;
- (void)addPropStat:(id)a0;
- (void).cxx_destruct;

@end
