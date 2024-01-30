@interface CLSHolidayDetectedScenes : NSObject

@property (readonly, nonatomic) unsigned long long detectedSceneEdgeCaseCount;
@property (readonly, nonatomic) unsigned long long detectedSceneMediumCount;
@property (readonly, nonatomic) unsigned long long detectedSceneImportantCount;
@property (readonly, nonatomic) unsigned long long detectedSceneImperativeCount;

- (id)init;
- (void)recordDetectedSceneImportance:(unsigned long long)a0;

@end
