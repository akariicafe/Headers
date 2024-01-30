@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)description;
- (void)addPrivilege:(id)a0;

@end
