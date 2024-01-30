@class PTUtil;
@protocol MTLTexture, MTLDevice;

@interface PTEffectTemporalState : NSObject {
    id<MTLDevice> _device;
    PTUtil *_util;
    id<MTLTexture> _disparityNetworkTemporalState;
    id<MTLTexture> _lastQuatersizeRGBA;
    void /* unknown type, empty encoding */ _faceRects[4];
    int _numberOfFaceRects;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 util:(id)a1;
- (void)restoreState:(id)a0 network:(id)a1 disparityFilter:(id)a2 faceRects:(void *)a3 numberOfFaceRects:(int *)a4;
- (void)saveState:(id)a0 network:(id)a1 msrColorPyramid:(id)a2 faceRects:(void *)a3 numberOfFaceRects:(int)a4;

@end
