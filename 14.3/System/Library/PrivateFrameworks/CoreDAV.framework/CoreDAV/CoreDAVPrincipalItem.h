@class CoreDAVItemWithNoChildren, CoreDAVHrefItem, CoreDAVItem;

@interface CoreDAVPrincipalItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *all;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *authenticated;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;
@property (retain, nonatomic) CoreDAVItem *property;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *selfItem;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)hashString;
- (id)description;
- (id)initTypeIsAll;
- (id)initTypeIsHREFWithURL:(id)a0;
- (id)initTypeIsProperty:(id)a0;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsUnauthenticated;
- (id)initTypeIsSelf;

@end
