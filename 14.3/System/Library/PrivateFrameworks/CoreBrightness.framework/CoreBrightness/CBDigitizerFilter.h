@class NSMutableArray;

@interface CBDigitizerFilter : CBFilter {
    BOOL _firstDigitizerEvent;
    float _digitizerWidth;
    float _digitizerHeight;
    float _deviceCenterX;
    float _deviceCenterY;
    BOOL _touchEnabled;
    float _touchHotSpotRadiusCM;
    float _touchHotSpotSquared;
    NSMutableArray *_hotspots;
}

@property (nonatomic, getter=isObstructed) BOOL obstructed;
@property int orientation;

- (void)dealloc;
- (id)initWithOrientation:(int)a0;
- (id)filterEvent:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)handleALSEvent:(id)a0;
- (void)initDigitizerProperties;
- (id)handleDigitizerEvent:(id)a0;
- (void)setTriggered:(int)a0 forHotspot:(id)a1;
- (void)loadTouchProperties:(struct __IOHIDServiceClient { } *)a0;
- (id)newHotspotForOrientation:(int)a0;

@end
