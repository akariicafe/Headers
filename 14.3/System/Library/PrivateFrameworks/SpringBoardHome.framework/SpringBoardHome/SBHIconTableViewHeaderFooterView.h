@protocol SBIconListLayoutProvider;

@interface SBHIconTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateFont;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
