@class SCRCPhotoEvaluatorResult;

@interface SCRCPhotoEvaluatorResults : NSObject

@property (readonly, nonatomic) SCRCPhotoEvaluatorResult *blurResult;
@property (readonly, nonatomic) SCRCPhotoEvaluatorResult *colorResult;
@property (readonly, nonatomic) SCRCPhotoEvaluatorResult *luminanceResult;

- (void).cxx_destruct;
- (id)initWithBlurResult:(id)a0 colorResult:(id)a1 luminanceResult:(id)a2;

@end
