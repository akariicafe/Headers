@protocol SBIconViewDelegate;

@interface SBHStackConfigurationIconListView : SBIconListView

@property (weak, nonatomic) id<SBIconViewDelegate> iconViewDelegate;

- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_setupCustomBackgroundConfigurationForIconView:(id)a0;
- (Class)baseIconViewClass;

@end
