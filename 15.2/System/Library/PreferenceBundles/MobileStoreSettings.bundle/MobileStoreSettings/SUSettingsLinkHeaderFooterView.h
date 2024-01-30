@class NSString, StoreSettingsLinkButton;

@interface SUSettingsLinkHeaderFooterView : UIView <PSHeaderFooterView> {
    StoreSettingsLinkButton *_linkButton;
    NSString *_linkURLBagKey;
}

+ (id)linkAttributedStringWithTitle:(id)a0 highlighted:(BOOL)a1;
+ (id)groupSpecifierWithFooterLinkWithTitle:(id)a0 URLBagKey:(id)a1;

- (void)layoutSubviews;
- (void)dealloc;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0;
- (void)_buttonAction:(id)a0;

@end
