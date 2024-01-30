@class ATXAppClipsFeedback;
@protocol ATXPETEventTracker2Protocol;

@interface ATXHeroClipManager : NSObject {
    id<ATXPETEventTracker2Protocol> _tracker;
}

@property (readonly, nonatomic) ATXAppClipsFeedback *feedback;

+ (id)addPredictionLocationToHeroAppPredictions:(id)a0 location:(id)a1;
+ (BOOL)clipsSupported;
+ (id)sortPredictionsOnFeedback:(id)a0;
+ (void)openAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;

- (void)logSuppressionMetricWithHeroAppPrediction:(id)a0 suppresionType:(int)a1;
- (id)initWithFeedback:(id)a0 tracker:(id)a1;
- (id)_populateMetadataInHeroAppPrediction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)donateAppClipsWithHeroAppPredictions:(id)a0;
- (id)initWithFeedback:(id)a0;

@end
