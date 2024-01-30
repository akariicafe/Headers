@class UIGraphicsImageRenderer, UIImage, CAShapeLayer, NSObject, PHAssetCollection;
@protocol OS_dispatch_queue, OS_os_log;

@interface PUPeopleAvatarView : UIImageView {
    BOOL _isRTL;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

@property (retain, nonatomic) UIGraphicsImageRenderer *imageRenderer;
@property (retain, nonatomic) UIImage *firstAvatar;
@property (retain, nonatomic) UIImage *secondAvatar;
@property (retain, nonatomic) UIImage *thirdAvatar;
@property (retain, nonatomic) CAShapeLayer *overlayLayer;
@property (readonly) NSObject<OS_os_log> *log;
@property (retain, nonatomic) PHAssetCollection *sharedAlbumCollection;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (struct CGSize { double x0; double x1; })_sizeForNumberOfAvatars:(unsigned long long)a0;
+ (void)_requestPersonPhoto:(id)a0 displayScale:(double)a1 highQualityFormat:(BOOL)a2 resultHandler:(id /* block */)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityInvertColorsStatusDidChange:(id)a0;
- (void)embedInView:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSharedAlbumCollection:(id)a0 forceLayoutSubscriberAvatars:(BOOL)a1;
- (void)_updateAvatars;
- (void)_generateAvatars;
- (void)_resetImages;
- (void)_resetViewContents;
- (void)_resetViewContentsIfNeededForAlbumCollection:(id)a0;
- (void)_setContentsImage:(id)a0 withShadowPath:(struct CGPath { } *)a1 forAlbumCollection:(id)a2;
- (void)_setImage:(id)a0 forIndex:(unsigned long long)a1;
- (void)_requestSubscriberMonogram:(id)a0 resultHandler:(id /* block */)a1;
- (void)setPersonPhoto:(id)a0 atIndex:(long long)a1 albumCollection:(id)a2;
- (void)_renderAvatarsForAlbumCollection:(id)a0;

@end
