@class UIImage, PXImageRequester, NSString;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXImageRequesterHelper : PXObservable <PXChangeObserver>

@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMediaProvider:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateImage;
- (void)setAsset:(id)a0;
- (void)setImage:(id)a0;
- (void)setScale:(double)a0;
- (void).cxx_destruct;
- (void)didPublishChanges;
- (void)_updateContentsRect;
- (void)_updateAssetOrMediaProvider;
- (void)_updateImageRequester;

@end
