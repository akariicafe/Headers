@class PKTableHeaderView;

@interface PKPassPersonalizationHeaderView : PKTableHeaderView {
    PKTableHeaderView *_tableHeaderView;
}

@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_configureForCurrentState;
- (void)dealloc;
- (id)initWithLogoImage:(id)a0 description:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
