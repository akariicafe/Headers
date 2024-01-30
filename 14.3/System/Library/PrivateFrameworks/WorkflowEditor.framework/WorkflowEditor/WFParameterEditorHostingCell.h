@class NSString, CKComponentHostingView, WFParameterEditorModel, UIViewController;
@protocol WFParameterEditorHostingCellDelegate;

@interface WFParameterEditorHostingCell : UITableViewCell <CKComponentProvider, CKComponentHostingViewDelegate, WFParameterEventObserver>

@property (weak, nonatomic) CKComponentHostingView *hostingView;
@property (retain, nonatomic) WFParameterEditorModel *model;
@property (nonatomic) double lastWidth;
@property (weak, nonatomic) id<WFParameterEditorHostingCellDelegate> delegate;
@property (weak, nonatomic) UIViewController *containingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentForModel:(id)a0 context:(id)a1;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateContext;
- (void)updateModel:(id)a0;
- (void)parameterAttributesDidChange:(id)a0;
- (void)componentHostingViewDidInvalidateSize:(id)a0;
- (void)updatedParameterState:(id)a0;

@end
