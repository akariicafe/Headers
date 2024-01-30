@class NSEnumerator, NSDateInterval, BLSAlwaysOnDateSpecifier, BLSHEnvironmentDatesModel;
@protocol BLSHBacklightSceneHostEnvironment;

@interface BLSHEnvironmentDatesEnumerator : NSObject

@property (retain, nonatomic) BLSAlwaysOnDateSpecifier *specifier;
@property (readonly, nonatomic) NSEnumerator *enumerator;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> environment;
@property (readonly, nonatomic) BLSHEnvironmentDatesModel *sourceModel;

+ (id)createWithInitialSpecifier:(id)a0 enumerator:(id)a1 dateInterval:(id)a2 environment:(id)a3 sourceModel:(id)a4;

- (void).cxx_destruct;

@end
