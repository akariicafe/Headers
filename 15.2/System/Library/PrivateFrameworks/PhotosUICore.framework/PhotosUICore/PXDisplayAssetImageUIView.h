@class NSString, UIImageView;

@interface PXDisplayAssetImageUIView : PXDisplayAssetUIView <PXChangeObserver> {
    UIImageView *_imageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageDidChange;
- (double)loadingProgress;
- (long long)playbackStyle;
- (void).cxx_destruct;
- (id)contentView;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (BOOL)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)_updateImageViewFilters;

@end
