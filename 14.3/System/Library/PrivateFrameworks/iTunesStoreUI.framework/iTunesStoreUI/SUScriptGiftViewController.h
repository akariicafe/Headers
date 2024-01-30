@class SKUIItem;

@interface SUScriptGiftViewController : SUScriptViewController {
    long long _giftCategory;
    SKUIItem *_item;
}

@property (readonly, nonatomic) long long giftCategoryApps;
@property (readonly, nonatomic) long long giftCategoryBooks;
@property (readonly, nonatomic) long long giftCategoryMedia;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;
- (void)setCreditGiftStyle:(long long)a0;
- (void)setProductGiftItem:(id)a0;

@end
