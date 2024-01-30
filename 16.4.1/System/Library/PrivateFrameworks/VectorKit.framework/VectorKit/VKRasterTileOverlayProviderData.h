@class NSString, NSArray;
@protocol VKRasterTileOverlayProviderDelegate;

@interface VKRasterTileOverlayProviderData : NSObject {
    double _alpha;
}

@property (weak, nonatomic) id<VKRasterTileOverlayProviderDelegate> delegate;
@property (nonatomic) unsigned int visibleKeyframeIndex;
@property (readonly, nonatomic) unsigned int providerID;
@property (readonly, nonatomic) unsigned int tileSize;
@property (readonly, nonatomic) unsigned int minimumZ;
@property (readonly, nonatomic) unsigned int maximumZ;
@property (nonatomic) double alpha;
@property (nonatomic) unsigned short keyframesCount;
@property (readonly, nonatomic) BOOL crossfadeKeyframes;
@property (nonatomic) double beginTime;
@property (nonatomic) double timeOffset;
@property (nonatomic) float repeatCount;
@property (nonatomic) double repeatDuration;
@property (nonatomic) double duration;
@property (nonatomic) float speed;
@property (nonatomic) BOOL autoreverses;
@property (copy, nonatomic) NSString *fillMode;
@property (copy) NSArray *keyTimes;
@property (nonatomic) int keyframeIndexOverride;
@property (nonatomic) struct CGImage { } *colorMap;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProviderID:(unsigned int)a0 tileSize:(unsigned int)a1 minimumZ:(unsigned int)a2 maximumZ:(unsigned int)a3 keyframesCount:(unsigned short)a4 duration:(double)a5 crossfadeKeyframes:(BOOL)a6;

@end
