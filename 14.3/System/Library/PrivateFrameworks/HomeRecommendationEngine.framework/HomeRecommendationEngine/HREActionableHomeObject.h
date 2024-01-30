@class NSSet, NSString, NSUUID, HMRoom, HMService, HMHome;
@protocol HFHomeKitObject;

@interface HREActionableHomeObject : NSObject <HFHomeContainedObject, HFRoomContextProviding>

@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) NSSet *characteristics;
@property (readonly, nonatomic) NSString *primaryType;
@property (readonly, nonatomic) NSSet *matchingTypes;
@property (readonly, nonatomic) NSSet *actionTypes;
@property (readonly, nonatomic) NSSet *profiles;
@property (readonly, nonatomic) HMService *service;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) BOOL isActionable;
@property (readonly, weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HMRoom *hf_parentRoom;

+ (id)_types:(id)a0 notMatchedByActionableObjects:(id)a1;
+ (id)actionableObjectsFromHomeKitObjects:(id)a0;
+ (BOOL)actionableObjects:(id)a0 matchAllTypes:(id)a1;
+ (BOOL)actionableObjects:(id)a0 matchAllTypeGroups:(id)a1;
+ (id)filterActionableObjects:(id)a0 toMatchTypes:(id)a1;
+ (id)filterActionableObjects:(id)a0 toRooms:(id)a1;
+ (id)filterActionableObjects:(id)a0 excludingObjectsInActions:(id)a1;

- (void).cxx_destruct;
- (id)serviceGroup;
- (id)initWithHomeKitObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)singularProfile;
- (id)_characteristicsInServices:(id)a0;
- (BOOL)_actionMap:(id)a0 includesType:(id)a1;
- (id)_profileTypeForProfile:(id)a0;
- (BOOL)_matchesAnyInTypes:(id)a0;
- (id)actionBuildersDerivedFromActions:(id)a0;
- (BOOL)involvedInActionMap:(id)a0;
- (id)characteristicMapFromActionMap:(id)a0;
- (BOOL)involvedInAction:(id)a0;

@end
