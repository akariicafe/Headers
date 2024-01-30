@class HKQuantity, NSMutableDictionary, HKHealthStore, NSDate;

@interface FIActivitySettingsController : NSObject <NSCopying> {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_dirtyPropertiesMap;
}

@property (copy, nonatomic) NSDate *dateOfBirth;
@property (retain, nonatomic) HKQuantity *height;
@property (retain, nonatomic) HKQuantity *weight;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long wheelchairUse;
@property (readonly, nonatomic) HKQuantity *leanBodyMass;
@property (readonly) unsigned long long experienceType;
@property (copy, nonatomic) id /* block */ updateHandler;

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setUncommitedValue:(id)a0 forPropertyKey:(id)a1;
- (BOOL)_logAndNilError:(id *)a0 operationDescription:(id)a1;
- (BOOL)_commitValue:(id)a0 forPropertyKey:(id)a1 error:(id *)a2;
- (BOOL)_hasDirtyPropertyForPropertyKey:(id)a0;
- (void)populateExistingCharacteristics;
- (BOOL)commmitWithError:(id *)a0;

@end
