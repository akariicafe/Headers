@class NSArray, NSMutableDictionary, NSDictionary, _HKWheelchairUseCharacteristicCache;

@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver> {
    NSArray *_displayTypes;
    NSDictionary *_displayTypesByIdentifier;
    NSDictionary *_displayTypesByCategoryIdentifier;
    NSDictionary *_displayTypesByObjectType;
}

@property (class, readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } controllersLock;
@property (class, readonly, nonatomic) NSMutableDictionary *controllers;

@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;

+ (id)sharedInstance;
+ (id)sharedInstanceForHealthStore:(id)a0;
+ (id)displayTypeForObjectType:(id)a0 wheelchairUse:(long long)a1;
+ (void)initializeSharedDisplayTypes;

- (id)initWithHealthStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)wheelchairUseCharacteristicCache:(id)a0 wheelchairUsageDidChange:(BOOL)a1;
- (id)displayTypeForObjectType:(id)a0;
- (id)displayTypeWithIdentifier:(id)a0;
- (id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)a0;
- (id)allDisplayTypes;
- (id)_displayTypeWithUpdatedWheelchairUserIfNecessary:(id)a0;
- (id)displayTypesForCategoryIdentifier:(long long)a0;

@end
