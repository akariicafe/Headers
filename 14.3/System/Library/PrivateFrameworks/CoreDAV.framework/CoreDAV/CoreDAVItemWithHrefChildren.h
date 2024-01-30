@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)hrefsAsFullURLs;
- (void)addHref:(id)a0;
- (id)hrefsAsOriginalURLs;
- (id)hrefsAsStrings;

@end
