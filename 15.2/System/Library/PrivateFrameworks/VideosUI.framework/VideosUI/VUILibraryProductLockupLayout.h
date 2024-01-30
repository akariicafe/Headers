@class NSString, VUIMediaEntityType;

@interface VUILibraryProductLockupLayout : NSObject <VUILibraryProductLockupViewLayout>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) VUIMediaEntityType *entityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayoutType:(long long)a0 entityType:(id)a1;
- (struct CGSize { double x0; double x1; })coverArtImageSize;
- (long long)layoutTypeForWindowWidth:(double)a0;
- (int)contentDescriptionNumberOfLinesForTraitCollection:(id)a0;
- (double)coverArtImageRightMarginForWindowWidth:(double)a0;
- (double)contentDescriptionTopMarginForWindowWidth:(double)a0;
- (double)buttonModuleTopMarginForWindowWidth:(double)a0;
- (double)subtitleTopMarginForWindowWidth:(double)a0;
- (double)contentDescriptionBottomMarginForWindowWidth:(double)a0;
- (double)metadataTopMargin;
- (long long)downloadButtonPosition;
- (id)contentDescriptionFontForSizeClass:(long long)a0;
- (double)coverArtBottomPadding;
- (double)titleTopMargin;

@end
