@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)init;

@end
