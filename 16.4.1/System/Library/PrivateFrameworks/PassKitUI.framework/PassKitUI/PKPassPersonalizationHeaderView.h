@class PKTableHeaderView;

@interface PKPassPersonalizationHeaderView : PKTableHeaderView {
    PKTableHeaderView *_tableHeaderView;
}

@property (nonatomic) unsigned long long state;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureForCurrentState;
- (id)initWithLogoImage:(id)a0 description:(id)a1;

@end
