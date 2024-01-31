@class CNUIBackgroundColors, NSArray, NSString, CIContext, UIImageView, CNContact, NSDictionary, NSObject, NSLayoutConstraint, CNContactPhotoView, UILabel, CNContactHeaderViewSizeAttributes;
@protocol OS_dispatch_queue, CNContactHeaderViewDelegate, CNPresenterDelegate;

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView> {
    BOOL _needsReload;
    CIContext *_colorExtractionContext;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *posterView;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) NSArray *contacts;
@property (retain) NSLayoutConstraint *photoTopConstraint;
@property (retain) NSLayoutConstraint *photoHeightConstraint;
@property (retain, nonatomic) CNContactHeaderViewSizeAttributes *sizeAttributes;
@property (nonatomic) BOOL needsLabelSizeCalculation;
@property (nonatomic) double lastViewWidth;
@property (nonatomic) double constrainedMaxHeight;
@property (nonatomic) BOOL shouldUseConstrainedMaxHeight;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundColorCacheQueue;
@property (retain, nonatomic) CNContact *contactMiniCache;
@property (retain, nonatomic) CNUIBackgroundColors *colorsMiniCache;
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
+ (id)makePhotoViewWithShouldAllowTakePhotoAction:(BOOL)a0 shouldAllowImageDrops:(BOOL)a1 monogramOnly:(BOOL)a2;
+ (id)sizeAttributesShowingNavBar:(BOOL)a0;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })defaultPhotoSize;

- (BOOL)isPad;
- (id)descriptorForRequiredKeys;
- (id)contactStyle;
- (void)dealloc;
- (void)reloadDataIfNeeded;
- (id)contactViewCache;
- (void)setNeedsReload;
- (void)prepareForReuse;
- (void)updateConstraints;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateFontSizes;
- (void)calculateLabelSizesIfNeeded;
- (id)colorExtractionContext;
- (double)currentHeightPercentMaximized;
- (double)currentHeightPercentMaximizedForMaxHeight:(double)a0;
- (double)currentHeightPercentMaximizedForPhoto;
- (double)defaultMaxBaseHeight;
- (double)defaultMaxHeight;
- (void)didFinishUsing;
- (void)fetchAndCacheColorsForContactImage:(id)a0 isPoster:(BOOL)a1 forContact:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)initWithContact:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldAllowTakePhotoAction:(BOOL)a2 shouldAllowImageDrops:(BOOL)a3 showingNavBar:(BOOL)a4 monogramOnly:(BOOL)a5 delegate:(id)a6;
- (BOOL)isOrientationPhoneLandscape;
- (BOOL)isPadCompactHorizontalSize;
- (BOOL)isPadRegularHorizontalSize;
- (BOOL)isPhotoLowQuality;
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
