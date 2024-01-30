@class __Hotspot, NSMutableArray;

@interface CBDigitizerFilter : CBFilter {
    BOOL _firstDigitizerEvent;
    float _digitizerWidth;
    float _digitizerHeight;
    float _deviceCenterX;
    float _deviceCenterY;
    BOOL _touchEnabled;
    float _touchHotSpotRadiusCM;
    float _touchHotSpotSquared;
    __Hotspot *_hotspotOverride;
    NSMutableArray *_hotspots;
}

@property (nonatomic, getter=isObstructed) BOOL obstructed;
@property int orientation;

- (void)initDigitizerProperties;
- (id)initWithOrientation:(int)a0;
- (id)handleALSEvent:(id)a0;
- (void)setTriggered:(int)a0 forHotspot:(id)a1;
- (void)dealloc;
- (id)filterEvent:(id)a0;
- (void)loadTouchProperties:(struct __IOHIDServiceClient { } *)a0;
- (void)overrideHotspotWithCenterX:(float)a0 andCenterY:(float)a1;
- (id)handleDigitizerEvent:(id)a0;
- (id)newHotspotForOrientation:(int)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;

@end
