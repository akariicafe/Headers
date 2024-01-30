@interface PGHolidayClassifier : NSObject

@property (readonly, nonatomic) double locationWeight;
@property (readonly, nonatomic) double dateWeight;
@property (readonly, nonatomic) double sceneWeight;
@property (readonly, nonatomic) double localeLocationWeight;
@property (readonly, nonatomic) double momentLocationWeight;
@property (readonly, nonatomic) double edgeCaseSceneWeight;
@property (readonly, nonatomic) double mediumSceneWeight;
@property (readonly, nonatomic) double importantSceneWeight;
@property (readonly, nonatomic) double imperativeSceneWeight;
@property (readonly, nonatomic) double celebrationThreshold;

- (id)init;
- (id)description;
- (BOOL)isCelebratingForDateScore:(double)a0 sceneScore:(double)a1 locationScore:(double)a2;
- (double)scoreForHolidayDetectedScenes:(id)a0;

@end
