@class NSString, UIImageView;

@interface PXDisplayAssetImageUIView : PXDisplayAssetUIView <PXChangeObserver> {
    UIImageView *_imageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)loadingProgress;
- (void).cxx_destruct;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (BOOL)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)_updateImageViewFilters;
- (long long)playbackStyle;
- (id)contentView;
- (void)imageDidChange;

@end
