@class NSObject;
@protocol MTLTexture, OS_dispatch_queue;

@interface ARImageNoiseTexture : NSObject {
    float _minSNR;
    float _maxSNR;
    float _nSteps;
    NSObject<OS_dispatch_queue> *_queue;
    float _lastSNR;
}

@property (readonly, nonatomic) id<MTLTexture> texture;

+ (id)sharedInstanceForCameraPosition:(long long)a0 longEdgeImageResolution:(unsigned int)a1;

- (void).cxx_destruct;
- (id)initWithNoiseModel:(int)a0;
- (float)snrToNoiseIntensity:(float)a0;

@end
