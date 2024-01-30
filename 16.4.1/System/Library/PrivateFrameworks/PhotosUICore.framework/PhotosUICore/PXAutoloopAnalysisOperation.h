@class NSProgress, NSDictionary, NSError, PLLivePhotoEditSource, NSNumber;

@interface PXAutoloopAnalysisOperation : NSOperation {
    NSDictionary *_recipesByVariationType;
}

@property (readonly, nonatomic) PLLivePhotoEditSource *editSource;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSDictionary *analysisResult;

- (void)main;
- (void)_timeout;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEditSource:(id)a0;
- (id)recipeForVariationType:(long long)a0;

@end
