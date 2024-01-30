@class NSArray, NSMutableDictionary, NSDictionary, _HKWheelchairUseCharacteristicCache;

@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver> {
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    NSArray *_displayTypes;
    NSDictionary *_displayTypesByIdentifier;
    NSDictionary *_displayTypesByCategoryIdentifier;
    NSDictionary *_displayTypesByObjectType;
}

@property (class, readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } controllersLock;
@property (class, readonly, nonatomic) NSMutableDictionary *controllers;

+ (id)sharedInstance;
+ (id)displayTypeForObjectType:(id)a0 wheelchairUse:(long long)a1;
+ (id)sharedInstanceForHealthStore:(id)a0;
+ (void)initializeSharedDisplayTypes;

- (id)initWithHealthStore:(id)a0;
- (id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)a0;
- (id)allDisplayTypes;
- (id)displayTypeForObjectType:(id)a0;
- (void)setWheelchairUseCharacteristicCache:(id)a0;
- (id)displayTypesForCategoryIdentifier:(long long)a0;
- (id)_displayTypeWithUpdatedWheelchairUserIfNecessary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)wheelchairUseCharacteristicCache:(id)a0 wheelchairUsageDidChange:(BOOL)a1;
- (id)displayTypeWithIdentifier:(id)a0;

@end
