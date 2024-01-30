@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *principalSearchProperties;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addPrincipalSearchProperty:(id)a0;

@end
