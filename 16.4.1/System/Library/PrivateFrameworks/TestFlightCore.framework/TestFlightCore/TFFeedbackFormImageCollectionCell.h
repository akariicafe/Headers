@class NSString, NSMutableArray, TFFeedbackEntryImageCollection;

@interface TFFeedbackFormImageCollectionCell : TFFeedbackFormBaseCell <UITextFieldDelegate>

@property (retain, nonatomic) TFFeedbackEntryImageCollection *imageCollectionEntry;
@property (readonly, nonatomic) NSMutableArray *imageViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageViewInsetsInTraitEnvironment:(id)a0;
+ (struct CGSize { double x0; double x1; })_sizeForImage:(id)a0 constrainedToWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })_sizeForImages:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1 inTraitEnvironment:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeForEntry:(id)a0 dataSource:(id)a1 fittingSize:(struct CGSize { double x0; double x1; })a2 inTraitEnvironment:(id)a3;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_createImageView;
- (void)_setupImagesViewsForImages:(id)a0;
- (void)applyContentsOfEntry:(id)a0;
- (unsigned long long)displayableDataType;
- (void)setDisplayedDataImageCollection:(id)a0;

@end
