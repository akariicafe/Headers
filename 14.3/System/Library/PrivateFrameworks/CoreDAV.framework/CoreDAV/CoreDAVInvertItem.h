@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)description;

@end
