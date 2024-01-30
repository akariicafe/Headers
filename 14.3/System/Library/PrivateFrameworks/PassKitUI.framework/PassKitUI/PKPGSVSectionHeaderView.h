@class NSString, UIActivityIndicatorView, UILabel, UIButton;
@protocol PKPGSVSectionHeaderViewDelegate;

@interface PKPGSVSectionHeaderView : UIView <PKPGSVSectionHeaderView> {
    BOOL _sizesDirty;
    UILabel *_titleView;
    UILabel *_environmentLabel;
    UIButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _margins;
    id<PKPGSVSectionHeaderViewDelegate> _delegate;
}

@property (readonly, nonatomic) unsigned long long passType;
@property (nonatomic) BOOL showActivityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needsUpdate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPassType:(unsigned long long)a0 delegate:(id)a1;
- (BOOL)_shouldShowMoreInfoButtonForBarcodePass;
- (void)addTapped;
- (void)_addTapped;
- (void)layoutSubviews;
- (id)leadingView;
- (void)traitCollectionDidChange:(id)a0;
- (id)trailingView;

@end
