@class NSIndexSet, NSMutableDictionary, NSDictionary;

@interface CEKLightingFrameCache : NSObject

@property (readonly, nonatomic) NSIndexSet *_availableAbsoluteAngles;
@property (retain, nonatomic) NSMutableDictionary *_foregroundFramesByAvailableAngle;
@property (retain, nonatomic) NSDictionary *_backgroundFrameMapsByLightingType;
@property (readonly, nonatomic) unsigned long long angleCount;

- (id)init;
- (void).cxx_destruct;
- (id)_appearanceForLightingType:(long long)a0;
- (BOOL)_needsBackgroundFrame;
- (BOOL)_needsForegroundFrames;
- (id)_renderBackgroundFramesForAbsoluteAngles:(id)a0 lightingType:(long long)a1 scale:(double)a2;
- (id)_renderForegroundFramesForAbsoluteAngles:(id)a0 scale:(double)a1;
- (id)_renderFrameForAngle:(long long)a0 scale:(double)a1 components:(long long)a2 appearance:(id)a3;
- (long long)angleOfAvailableFrameForAngle:(long long)a0;
- (id)backgroundFrameForAngle:(long long)a0 lightingType:(long long)a1;
- (id)foregroundFrameForAngle:(long long)a0;
- (void)preloadBackgroundFrames;
- (void)preloadForegroundFrames;

@end
