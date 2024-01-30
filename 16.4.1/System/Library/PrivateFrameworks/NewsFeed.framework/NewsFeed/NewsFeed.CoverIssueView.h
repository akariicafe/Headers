@class NSString;

@interface NewsFeed.CoverIssueView : UIView {
    void /* unknown type, empty encoding */ moreActionsButton;
    void /* unknown type, empty encoding */ followButton;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ issueCoverView;
    void /* unknown type, empty encoding */ secondaryIssueCoverView;
    void /* unknown type, empty encoding */ accessoryLabel;
    void /* unknown type, empty encoding */ downloadProgressBar;
    void /* unknown type, empty encoding */ cloudIcon;
    void /* unknown type, empty encoding */ selectionImageView;
    void /* unknown type, empty encoding */ onEditSelection;
    void /* unknown type, empty encoding */ debugButton;
    void /* unknown type, empty encoding */ isEditSelected;
    void /* unknown type, empty encoding */ downloadButtonDataProvider;
    void /* unknown type, empty encoding */ downloadStateDisposable;
    void /* unknown type, empty encoding */ downloadProgressDisposable;
}

@property (nonatomic, copy) NSString *accessibilityValue;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
