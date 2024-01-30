@class NSString, NSArray, CNContactHeaderViewSizeAttributes, NSDictionary, UILabel, NSLayoutConstraint, CNContactPhotoView;
@protocol CNContactHeaderViewDelegate, CNPresenterDelegate;

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView> {
    BOOL _needsReload;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) NSArray *contacts;
@property (retain) NSLayoutConstraint *photoTopConstraint;
@property (retain) NSLayoutConstraint *photoHeightConstraint;
@property (retain, nonatomic) CNContactHeaderViewSizeAttributes *sizeAttributes;
@property (nonatomic) BOOL needsLabelSizeCalculation;
@property (nonatomic) double lastViewWidth;
@property (nonatomic) double constrainedMaxHeight;
@property (nonatomic) BOOL shouldUseConstrainedMaxHeight;
@property (readonly, nonatomic) CNContactPhotoView *photoView;
@property (nonatomic) BOOL alwaysShowsMonogram;
@property (nonatomic) BOOL visibleToScrollViews;
@property (nonatomic) BOOL showMonogramsOnly;
@property (nonatomic) BOOL shouldShowBelowNavigationTitle;
@property (copy, nonatomic) NSDictionary *nameTextAttributes;
@property (weak, nonatomic) id<CNPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id<CNContactHeaderViewDelegate> delegate;
@property (readonly, nonatomic) double minHeight;
@property (readonly, nonatomic) double maxHeight;
@property (readonly, nonatomic) double minTitleOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)a0;
+ (id)sizeAttributesShowingNavBar:(BOOL)a0;
+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)a0 shouldAllowImageDrops:(BOOL)a1 monogramOnly:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })defaultPhotoSize;

- (id)contactStyle;
- (id)descriptorForRequiredKeys;
- (id)contactViewCache;
- (void)prepareForReuse;
- (void)setNeedsReload;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)reloadDataIfNeeded;
- (void).cxx_destruct;
- (void)updateFontSizes;
- (void)calculateLabelSizesIfNeeded;
- (double)currentHeightPercentMaximized;
- (double)currentHeightPercentMaximizedForMaxHeight:(double)a0;
- (double)currentHeightPercentMaximizedForPhoto;
- (double)defaultMaxBaseHeight;
- (double)defaultMaxHeight;
- (void)didFinishUsing;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldAllowTakePhotoAction:(BOOL)a2 shouldAllowImageDrops:(BOOL)a3 showingNavBar:(BOOL)a4 monogramOnly:(BOOL)a5 delegate:(id)a6;
- (void)photoView:(id)a0 didAcceptDropOfImageData:(id)a1;
- (void)photoViewDidUpdate:(id)a0;
- (void)reloadDataPreservingChanges:(BOOL)a0;
- (double)safeAreaPhotoOffset;
- (double)safeAreaTop;
- (void)setConstrainedMaxHeight:(double)a0 enabled:(BOOL)a1;
- (void)updateForShowingNavBar:(BOOL)a0;
- (void)updateSizeDependentAttributes;
- (void)updateWithContacts:(id)a0;
- (void)updateWithNewContact:(id)a0;
- (id)viewControllerForPhotoView:(id)a0;

@end
