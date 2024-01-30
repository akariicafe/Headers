@class NSString, UIImageView, PXImageRequester, PXUIMediaProvider;
@protocol PXDisplayAsset;

@interface PXWallpaperSuggestionView : UIImageView <PXChangeObserver>

@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (retain, nonatomic) UIImageView *overlayView;
@property long long currentImageIdentifier;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (nonatomic) BOOL needsRoundedCorner;
@property (nonatomic) BOOL showClockOverlay;
@property (nonatomic) unsigned long long classificationMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWorkQueue;
+ (void)preloadResources;
+ (void)requestSharedOverlayImageWithCompletionBlock:(id /* block */)a0;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_resetImageRequester;

@end
