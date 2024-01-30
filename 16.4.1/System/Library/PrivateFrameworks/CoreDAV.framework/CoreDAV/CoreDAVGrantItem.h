@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (id)init;
- (id)description;
- (void)addPrivilege:(id)a0;
- (void).cxx_destruct;

@end
