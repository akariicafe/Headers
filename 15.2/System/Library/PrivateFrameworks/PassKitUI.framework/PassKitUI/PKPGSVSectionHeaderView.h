@class NSString, UIActivityIndicatorView, UILabel, PKButtonBadgeView, UIButton;
@protocol PKPGSVSectionHeaderViewDelegate;

@interface PKPGSVSectionHeaderView : UIView <PKPGSVSectionHeaderView> {
    BOOL _sizesDirty;
    UILabel *_titleView;
    UILabel *_environmentLabel;
    UIButton *_actionButton;
    UIButton *_inboxButton;
    PKButtonBadgeView *_inboxBadge;
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
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)leadingView;
- (id)trailingView;
- (id)initWithPassType:(unsigned long long)a0 delegate:(id)a1;
- (BOOL)_shouldShowInboxButton;
- (id)_inboxBadgeValue;
- (void)addTapped;
- (BOOL)_shouldShowMoreInfoButtonForBarcodePass;
- (void)inboxTapped;
- (void)_addTapped;
- (void)_inboxTapped;

@end
