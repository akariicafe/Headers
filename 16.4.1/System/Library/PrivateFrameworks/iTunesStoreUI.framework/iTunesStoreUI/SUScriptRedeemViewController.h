@class NSString;

@interface SUScriptRedeemViewController : SUScriptViewController {
    long long _category;
    NSString *_initialCode;
}

@property (copy, nonatomic) NSString *initialCode;
@property (readonly, nonatomic) long long redeemCategoryApps;
@property (readonly, nonatomic) long long redeemCategoryBooks;
@property (readonly, nonatomic) long long redeemCategoryMedia;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)setRedeemStyle:(long long)a0;
- (id)newNativeViewController;

@end
