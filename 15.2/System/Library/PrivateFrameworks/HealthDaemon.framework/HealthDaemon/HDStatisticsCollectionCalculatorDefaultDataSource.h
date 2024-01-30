@class NSString, HDSQLitePredicate, HDProfile, NSSet, _HKFilter, NSNumber, HKQuantityType;

@interface HDStatisticsCollectionCalculatorDefaultDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource> {
    HDSQLitePredicate *_fullPredicate;
    BOOL _isRealQuantityType;
}

@property (copy, nonatomic) _HKFilter *filter;
@property (copy, nonatomic) NSNumber *anchor;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (copy, nonatomic) HDSQLitePredicate *predicate;
@property (copy, nonatomic) NSSet *restrictedSourceEntities;
@property (nonatomic) BOOL includeUnfrozenSeries;
@property (readonly, copy, nonatomic) NSNumber *maxRowID;
@property (nonatomic) long long shouldContinueFrequency;
@property (copy, nonatomic) id /* block */ shouldContinueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
