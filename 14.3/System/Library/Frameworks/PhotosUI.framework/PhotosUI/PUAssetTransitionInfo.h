@class NSArray, PXImageLayerModulator, UIImage, UIView, NSString, PUPhotoViewContentHelper;
@protocol PUDisplayAsset;

@interface PUAssetTransitionInfo : NSObject <PUAssetTransitionInfoConfiguration>

@property (retain, nonatomic) UIView *snapshotView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL allowAutoPlay;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) id<PUDisplayAsset> asset;
@property (copy, nonatomic) NSArray *badgeTransitionInfos;
@property (retain, nonatomic) PUPhotoViewContentHelper *contentHelper;
@property (retain, nonatomic) PXImageLayerModulator *imageLayerModulator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetTransitionInfoWithConfigurationBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;

@end
