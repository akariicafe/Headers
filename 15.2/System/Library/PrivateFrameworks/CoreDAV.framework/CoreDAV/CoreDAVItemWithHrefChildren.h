@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void)addHref:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)hrefsAsFullURLs;
- (id)hrefsAsStrings;
- (id)hrefsAsOriginalURLs;

@end
