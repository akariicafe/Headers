@class UILayoutGuide, MFMessageDisplayMetrics, NSString, SeparatorLayer, NSLayoutConstraint, MessageHeaderViewModel;
@protocol EFCancelable;

@interface MFMessageHeaderViewBlock : UIView <MFReusable>

@property (retain, nonatomic) MessageHeaderViewModel *viewModel;
@property (retain, nonatomic) SeparatorLayer *separator;
@property (retain, nonatomic) UILayoutGuide *trailingAccessoryViewLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideWidth;
@property (retain, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideTrailing;
@property (retain, nonatomic) NSLayoutConstraint *separatorLeading;
@property (retain, nonatomic) NSLayoutConstraint *separatorTrailing;
@property (retain, nonatomic) id<EFCancelable> observableCancelable;
@property (retain, nonatomic) MFMessageDisplayMetrics *displayMetrics;
@property (nonatomic) BOOL separatorIsHidden;
@property (nonatomic) BOOL separatorDrawsFlushWithLeadingEdge;
@property (nonatomic) BOOL separatorDrawsFlushWithTrailingEdge;
@property (nonatomic) BOOL usingLargeTextLayout;
@property (nonatomic) BOOL interactivelyResizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)displayMessageUsingViewModel:(id)a0;
- (void)createPrimaryViews;
- (void)initializePrimaryLayoutConstraints;

@end
