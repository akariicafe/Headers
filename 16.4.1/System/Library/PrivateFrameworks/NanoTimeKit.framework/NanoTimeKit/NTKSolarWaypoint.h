@class NSString, NTKSolarTimeModel, NSDate;

@interface NTKSolarWaypoint : NSObject <NTKCacheableKeyProvider> {
    NSString *_localizedName;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NTKSolarTimeModel *solarTimeModel;
@property (readonly, nonatomic) NSDate *waypointDate;
@property (readonly, nonatomic) double percentageThroughPeriodForWaypointDate;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)ntkCacheableKey;
- (id)initWithType:(long long)a0 solarTimeModel:(id)a1;
- (void)updateDependentValues;
- (void)updateDependentValuesWithPlaceholderData;

@end
