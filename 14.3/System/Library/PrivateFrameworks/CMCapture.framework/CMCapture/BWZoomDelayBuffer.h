@interface BWZoomDelayBuffer : NSObject {
    struct { float x0; int x1; BOOL x2; } *_zoomRequestBuffer;
    unsigned int _zoomRequestBufferIndex;
    unsigned int _maxZoomDelay;
    int _currentZoomDirection;
}

@property (readonly, nonatomic) unsigned int zoomDelay;
@property (nonatomic) int operatingMode;

- (void)addZoomRequest:(struct { float x0; int x1; BOOL x2; })a0;
- (void)updateZoomDelay:(unsigned int)a0;
- (id)initWithMaxZoomDelay:(unsigned int)a0;
- (void)dealloc;
- (struct { float x0; int x1; BOOL x2; })zoomRequestForISPAppliedZoomFactor:(float)a0;

@end
