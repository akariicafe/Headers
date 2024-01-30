@class NSString, WFParameterEditorModel, WFParameterHostingView, UIViewController;
@protocol WFParameterEditorHostingCellDelegate;

@interface WFParameterEditorHostingCell : UITableViewCell <WFParameterEventObserver>

@property (retain, nonatomic) WFParameterHostingView *modernHostingView;
@property (nonatomic) double lastWidth;
@property (weak, nonatomic) id<WFParameterEditorHostingCellDelegate> delegate;
@property (weak, nonatomic) UIViewController *containingViewController;
@property (readonly, nonatomic) WFParameterEditorModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateContext;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateModel:(id)a0;
- (void)parameterAttributesDidChange:(id)a0;
- (void)reconfigureModernView;
- (void)updatedParameterState:(id)a0;
- (void)componentHostingViewDidInvalidateSize:(id)a0;

@end
