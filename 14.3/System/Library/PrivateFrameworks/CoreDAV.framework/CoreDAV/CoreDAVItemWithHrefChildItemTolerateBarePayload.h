@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
}

- (id)href;
- (void).cxx_destruct;
- (id)description;
- (void)setPayload:(id)a0;

@end
