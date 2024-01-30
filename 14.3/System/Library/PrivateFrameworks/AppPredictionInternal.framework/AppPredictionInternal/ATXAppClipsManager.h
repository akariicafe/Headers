@class ATXAppClipsFeedback;
@protocol ATXPETEventTracker2Protocol;

@interface ATXAppClipsManager : NSObject {
    id<ATXPETEventTracker2Protocol> _tracker;
}

@property (readonly, nonatomic) ATXAppClipsFeedback *feedback;

+ (id)sortPredictionsOnFeedback:(id)a0;
+ (void)openAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
+ (id)addPredictionLocationToHeroAppPredictions:(id)a0 location:(id)a1;
+ (BOOL)clipsSupported;

- (id)init;
- (id)initWithFeedback:(id)a0 tracker:(id)a1;
- (id)_populateMetadataInHeroAppPrediction:(id)a0;
- (void).cxx_destruct;
- (void)logSuppressionMetricWithHeroAppPrediction:(id)a0 suppresionType:(int)a1;
- (id)initWithFeedback:(id)a0;
- (void)donateAppClipsWithHeroAppPredictions:(id)a0;

@end
