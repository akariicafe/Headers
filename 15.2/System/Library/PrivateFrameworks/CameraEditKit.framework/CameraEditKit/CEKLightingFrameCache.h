@class NSIndexSet, NSMutableDictionary, NSDictionary;

@interface CEKLightingFrameCache : NSObject

@property (readonly, nonatomic) NSIndexSet *_availableAbsoluteAngles;
@property (retain, nonatomic) NSMutableDictionary *_foregroundFramesByAvailableAngle;
@property (retain, nonatomic) NSDictionary *_backgroundFrameMapsByLightingType;
@property (readonly, nonatomic) unsigned long long angleCount;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_needsForegroundFrames;
- (id)_renderForegroundFramesForAbsoluteAngles:(id)a0 scale:(double)a1;
- (id)_renderBackgroundFramesForAbsoluteAngles:(id)a0 lightingType:(long long)a1 scale:(double)a2;
- (long long)angleOfAvailableFrameForAngle:(long long)a0;
- (id)_appearanceForLightingType:(long long)a0;
- (id)_renderFrameForAngle:(long long)a0 scale:(double)a1 components:(long long)a2 appearance:(id)a3;
- (void)preloadForegroundFrames;
- (void)preloadBackgroundFrames;
- (id)foregroundFrameForAngle:(long long)a0;
- (id)backgroundFrameForAngle:(long long)a0 lightingType:(long long)a1;
- (BOOL)_needsBackgroundFrame;

@end
