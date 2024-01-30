@class UIView, PXExtendedTraitCollection, NSString, PXTitleSubtitleUILabel, NSLayoutConstraint, UIViewController;

@interface PMTitleSubtitleView : UIView <PXChangeObserver> {
    struct CGPoint { double x; double y; } _ptOffset;
}

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) PXTitleSubtitleUILabel *label;
@property (retain, nonatomic) UIView *dark;
@property (retain, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } specSize;
@property (nonatomic) double titleScale;
@property (nonatomic) struct CGPoint { double x0; double x1; } ptOffset;
@property (readonly, nonatomic) double heightOfTitleArea;
@property (retain, nonatomic) NSString *titleFontName;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)toolbarHeight;
- (void)registerForChangesFromViewController:(id)a0;
- (void)updateTitleAnimationFromVideoComposition:(id)a0;
- (void)updateSubtitleTitleLabelForSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateSpecIfNeeded;
- (void)updateDarkFrame;
- (void)updateFeatureSpecWithExtendedTraitCollection:(id)a0;
- (void)updateSpecialConstraints;
- (void)setSpecForVerticalExport;

@end
