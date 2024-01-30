@class NSString, UISegmentedControl;

@interface CKPhotosSearchResultsModeHeaderReusableView : UICollectionReusableView <CKSearchResultSupplementryCell>

@property (retain, nonatomic) UISegmentedControl *control;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supplementaryViewType;
+ (double)desiredZPosition;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_controlIndexDidChange:(id)a0;

@end
