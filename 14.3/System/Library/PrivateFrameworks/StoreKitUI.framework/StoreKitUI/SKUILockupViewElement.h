@class SKUIFullscreenImageViewElement;

@interface SKUILockupViewElement : SKUIViewElement {
    char _enabled;
}

@property (readonly, nonatomic) BOOL containsElementGroups;
@property (readonly, nonatomic) SKUIFullscreenImageViewElement *fullscreenImage;
@property (readonly, nonatomic) long long lockupViewType;
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable;

- (BOOL)isEnabled;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)pageComponentType;

@end
