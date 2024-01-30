@class NSString, UIView;
@protocol HUControlView;

@interface HUTitleControlCell : HUControlPanelCell

@property (copy, nonatomic) NSString *controlTitle;
@property (retain, nonatomic) UIView<HUControlView> *controlView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)allControlViews;

@end
