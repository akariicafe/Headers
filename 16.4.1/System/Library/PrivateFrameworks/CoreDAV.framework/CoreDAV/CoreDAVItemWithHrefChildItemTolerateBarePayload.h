@class NSURL, CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
    NSURL *_baseURL;
}

- (void)setPayload:(id)a0;
- (id)href;
- (id)description;
- (void)parserSuggestsBaseURL:(id)a0;
- (void).cxx_destruct;

@end
