@class NSString, UIButton;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setConfiguration:(id)a0;
- (void)_buttonAction:(id)a0;
- (id)_newButton;
- (void)_reloadButtons;
- (void)reloadView;

@end
