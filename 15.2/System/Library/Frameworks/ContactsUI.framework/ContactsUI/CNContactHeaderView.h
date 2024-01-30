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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (struct CGSize { double x0; double x1; })defaultPhotoSize;
+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)a0 shouldAllowImageDrops:(BOOL)a1 monogramOnly:(BOOL)a2;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)a0;
+ (id)sizeAttributesShowingNavBar:(BOOL)a0;
+ (BOOL)requiresConstraintBasedLayout;

- (id)descriptorForRequiredKeys;
- (void)setNeedsReload;
- (void)layoutSubviews;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldAllowTakePhotoAction:(BOOL)a2 shouldAllowImageDrops:(BOOL)a3 showingNavBar:(BOOL)a4 monogramOnly:(BOOL)a5 delegate:(id)a6;
- (id)contactStyle;
- (void)photoViewDidUpdate:(id)a0;
- (void)photoView:(id)a0 didSaveImageDropToContact:(id)a1;
- (id)viewControllerForPhotoView:(id)a0;
- (void)updateForShowingNavBar:(BOOL)a0;
- (double)safeAreaPhotoOffset;
- (double)defaultMaxBaseHeight;
- (double)defaultMaxHeight;
- (void)setConstrainedMaxHeight:(double)a0 enabled:(BOOL)a1;
- (void)updateWithNewContact:(id)a0;
- (void)calculateLabelSizesIfNeeded;
- (void)didFinishUsing;
- (double)currentHeightPercentMaximized;
- (double)currentHeightPercentMaximizedForPhoto;
- (double)currentHeightPercentMaximizedForMaxHeight:(double)a0;
- (void)updateSizeDependentAttributes;
- (void)reloadDataIfNeeded;
- (void)updateFontSizes;
- (void)updateWithContacts:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)reloadDataPreservingChanges:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void)prepareForReuse;
- (void)dealloc;
- (double)safeAreaTop;
- (id)contactViewCache;

@end
