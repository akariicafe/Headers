@protocol VKRasterTileOverlayProviderDelegate;

@interface VKRasterTileOverlayProviderData : NSObject {
    double _alpha;
}

@property (nonatomic) id<VKRasterTileOverlayProviderDelegate> delegate;
@property (nonatomic) unsigned int visibleKeyframeIndex;
@property (readonly, nonatomic) unsigned int providerID;
@property (readonly, nonatomic) unsigned int tileSize;
@property (readonly, nonatomic) unsigned int minimumZ;
@property (readonly, nonatomic) unsigned int maximumZ;
@property (nonatomic) double alpha;
@property (readonly, nonatomic) unsigned short keyframesCount;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL crossfadeKeyframes;
@property (nonatomic) int keyframeIndexOverride;
@property (nonatomic) struct CGImage { } *colorMap;

- (id)initWithProviderID:(unsigned int)a0 tileSize:(unsigned int)a1 minimumZ:(unsigned int)a2 maximumZ:(unsigned int)a3 keyframesCount:(unsigned short)a4 duration:(double)a5 crossfadeKeyframes:(BOOL)a6;
- (void)dealloc;

@end
