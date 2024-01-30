@class UIColor, NSString, NSArray, UIImage;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXCMMSuggestionViewModel : PXObservable

@property (class, readonly) double faceTileImageDiameter;

@property (readonly, copy, nonatomic) NSString *posterTitle;
@property (readonly, copy, nonatomic) NSString *posterSubtitle;
@property (readonly, nonatomic) id<PXDisplayAsset> posterAsset;
@property (readonly, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (readonly, copy, nonatomic) NSArray *localizedNames;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *combinedFaceTileImage;
@property (readonly, nonatomic) UIColor *opaqueAncestorBackgroundColor;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;

- (id)init;
- (void)setContainsUnverifiedPersons:(BOOL)a0;
- (void).cxx_destruct;
- (void)setLocalizedNames:(id)a0;
- (void)setPosterTitle:(id)a0;
- (void)setPosterSubtitle:(id)a0;
- (void)setPosterAsset:(id)a0;
- (void)setPosterMediaProvider:(id)a0;
- (void)setOpaqueAncestorBackgroundColor:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setSubtitle:(id)a0;
- (void)setCombinedFaceTileImage:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
