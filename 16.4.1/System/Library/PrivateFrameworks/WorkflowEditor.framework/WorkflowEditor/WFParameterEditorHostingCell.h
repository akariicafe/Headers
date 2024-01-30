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
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)updateContext;
- (void)parameterAttributesDidChange:(id)a0;
- (void)updateModel:(id)a0;
- (void)reconfigureModernView;
- (void)updatedParameterState:(id)a0 isUIUpdate:(BOOL)a1;

@end
