@class VEKProduction, MiroMovie, VEKResult;

@interface PMTapToRadarActivity : UIActivity

@property (weak, nonatomic) VEKProduction *production;
@property (weak, nonatomic) MiroMovie *tapToRadarMovie;
@property (weak, nonatomic) VEKResult *result;

- (id)activityType;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithProduction:(id)a0 result:(id)a1;
- (id)_returnTextDebugAsString;

@end
