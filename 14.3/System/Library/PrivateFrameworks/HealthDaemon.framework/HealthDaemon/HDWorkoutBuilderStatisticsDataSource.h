@class HDWorkoutBuilderEntity, NSString, HDProfile, HKQuantityType;

@interface HDWorkoutBuilderStatisticsDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource>

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) HDWorkoutBuilderEntity *builderEntity;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
