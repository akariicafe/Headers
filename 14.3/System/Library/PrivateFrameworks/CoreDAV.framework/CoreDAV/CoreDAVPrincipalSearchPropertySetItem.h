@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *principalSearchProperties;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addPrincipalSearchProperty:(id)a0;

@end
