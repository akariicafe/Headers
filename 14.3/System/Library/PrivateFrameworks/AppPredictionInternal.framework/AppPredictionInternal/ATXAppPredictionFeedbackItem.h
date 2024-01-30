@class NSString;

@interface ATXAppPredictionFeedbackItem : NSObject {
    float _scoreInputs[807];
}

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) float totalScore;
@property (readonly, nonatomic) const float *scoreInputs;

+ (struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; } x2; })predictionItemsInFeedbackChunkFromCacheChunks:(id)a0;
+ (id)feedbackItemsForResponse:(id)a0;
+ (struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; } x2; })predictionItemsInFeedbackChunkFromCacheFileData:(id)a0;
+ (struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; } x2; })predictionItemsForFeedbackChunk:(id)a0;
+ (id)feedbackItemsForCacheFileData:(id)a0;
+ (id)feedbackItemsForFeedbackChunk:(id)a0;
+ (id)feedbackItemsForChunks:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleId:(id)a0 totalScore:(float)a1 scoreInputs:(const float *)a2;

@end
