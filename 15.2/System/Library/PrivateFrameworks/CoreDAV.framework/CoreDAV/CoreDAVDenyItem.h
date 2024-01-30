@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)init;
- (void)addPrivilege:(id)a0;

@end
