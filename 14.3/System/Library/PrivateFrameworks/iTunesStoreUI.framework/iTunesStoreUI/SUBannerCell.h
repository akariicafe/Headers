@class NSString, UIButton;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setConfiguration:(id)a0;
- (void)dealloc;
- (id)_newButton;
- (void)layoutSubviews;
- (void)_buttonAction:(id)a0;
- (void)reloadView;
- (void)_reloadButtons;

@end
