@class NSString, HUItemTableSectionHeaderFooterView;

@interface HUSectionHeaderFooterCell : UITableViewCell <HUCellSeparatorAppearanceDefining>

@property (readonly, nonatomic) HUItemTableSectionHeaderFooterView *headerFooterView;
@property (readonly, nonatomic) BOOL prefersSeparatorsHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
