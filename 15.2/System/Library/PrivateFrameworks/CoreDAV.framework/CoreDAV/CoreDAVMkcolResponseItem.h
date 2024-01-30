@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (id)description;
- (BOOL)hasPropertyError;
- (void).cxx_destruct;
- (id)init;
- (void)addPropStat:(id)a0;

@end
