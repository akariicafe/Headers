@class SKUIItem, SKUILockupViewElement, SKUIEditorialComponent;

@interface SKUILockupComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUILockupViewElement *viewElement;
@property (readonly, nonatomic) BOOL _needsItemData;
@property (readonly, nonatomic) SKUIEditorialComponent *editorial;
@property (readonly, nonatomic) SKUIItem *item;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) struct SKUILockupStyle { long long artworkSize; long long layoutStyle; unsigned long long visibleFields; } lockupStyle;

- (long long)componentType;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0 style:(struct SKUILockupStyle { long long x0; long long x1; unsigned long long x2; })a1;
- (void)_setItem:(id)a0;
- (void)_setLockupStyle:(struct SKUILockupStyle { long long x0; long long x1; unsigned long long x2; })a0;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithItemIdentifier:(long long)a0 style:(struct SKUILockupStyle { long long x0; long long x1; unsigned long long x2; })a1;
- (id)initWithViewElement:(id)a0;

@end
