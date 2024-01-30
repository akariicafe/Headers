@class NSString, StoreSettingsLinkButton;

@interface SUSettingsLinkHeaderFooterView : UIView <PSHeaderFooterView> {
    StoreSettingsLinkButton *_linkButton;
    NSString *_linkURLBagKey;
}

+ (id)linkAttributedStringWithTitle:(id)a0 highlighted:(BOOL)a1;
+ (id)groupSpecifierWithFooterLinkWithTitle:(id)a0 URLBagKey:(id)a1;

- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_buttonAction:(id)a0;

@end
