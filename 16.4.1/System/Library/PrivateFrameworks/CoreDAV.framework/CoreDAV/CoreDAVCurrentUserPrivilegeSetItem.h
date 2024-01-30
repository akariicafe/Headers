@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *privileges;

+ (id)copyParseRules;

- (BOOL)hasPrivilegeWithNameSpace:(id)a0 andName:(id)a1;
- (id)init;
- (id)description;
- (void)addPrivilege:(id)a0;
- (void).cxx_destruct;

@end
