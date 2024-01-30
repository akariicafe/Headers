@class NSCache, WFDialogListItem, NSString, WFListDisplayConfiguration, MTVisualStylingProvider, TLKSimpleRowView;

@interface WFChooseFromListDialogCell : UITableViewCell <UIPointerInteractionDelegate>

@property (weak, nonatomic) TLKSimpleRowView *rowView;
@property (retain, nonatomic) WFDialogListItem *listItem;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (retain, nonatomic) MTVisualStylingProvider *fillVisualStylingProvider;
@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) WFListDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (unsigned long long)tlkCornerRoundingStyleForWFRoundingStyle:(unsigned long long)a0;

@end
