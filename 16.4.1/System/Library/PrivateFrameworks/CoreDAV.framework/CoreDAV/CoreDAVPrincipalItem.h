@class CoreDAVItemWithNoChildren, CoreDAVHrefItem, CoreDAVItem;

@interface CoreDAVPrincipalItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *all;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *authenticated;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;
@property (retain, nonatomic) CoreDAVItem *property;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *selfItem;

+ (id)copyParseRules;

- (void)write:(id)a0;
- (id)hashString;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initTypeIsAll;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsHREFWithURL:(id)a0;
- (id)initTypeIsProperty:(id)a0;
- (id)initTypeIsSelf;
- (id)initTypeIsUnauthenticated;

@end
