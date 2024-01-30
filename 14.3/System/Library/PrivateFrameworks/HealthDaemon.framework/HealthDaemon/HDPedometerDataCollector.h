@class NSString, NSNumber;

@interface HDPedometerDataCollector : HDCoreMotionDataCollector <HDUserCharacteristicsProfileObserver> {
    NSNumber *_userCondition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPedometerDataCollectionSupported;

- (id)initWithProfile:(id)a0;
- (id)persistentIdentifier;
- (Class)coreMotionDatumClass;
- (void).cxx_destruct;
- (void)dealloc;
- (id)collectedTypes;
- (void)userCharacteristicsManager:(id)a0 didUpdateUserProfile:(id)a1;
- (BOOL)queue_userConditionIsSet;
- (BOOL)queue_userIsAbleBodied;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;

@end
