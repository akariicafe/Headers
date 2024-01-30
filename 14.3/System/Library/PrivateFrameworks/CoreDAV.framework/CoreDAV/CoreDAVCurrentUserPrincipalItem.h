@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
