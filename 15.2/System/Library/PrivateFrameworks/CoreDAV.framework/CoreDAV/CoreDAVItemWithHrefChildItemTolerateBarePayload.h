@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
}

- (id)href;
- (void)setPayload:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
