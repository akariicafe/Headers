@class NSCache, WFDialogListItem, NSString, MTVisualStylingProvider, TLKSimpleRowView;

@interface WFChooseFromListDialogCell : UITableViewCell <UIPointerInteractionDelegate>

@property (weak, nonatomic) TLKSimpleRowView *rowView;
@property (retain, nonatomic) WFDialogListItem *listItem;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (retain, nonatomic) MTVisualStylingProvider *fillVisualStylingProvider;
@property (retain, nonatomic) NSCache *imageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)tlkCornerRoundingStyleForWFRoundingStyle:(unsigned long long)a0;

@end
