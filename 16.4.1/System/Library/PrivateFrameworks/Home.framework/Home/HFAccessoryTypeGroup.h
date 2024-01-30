@class NSString, NSSet, NSUUID;

@interface HFAccessoryTypeGroup : NSObject <HFAccessoryRepresentableObjectFiltering>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *types;
@property (retain, nonatomic) NSString *_fullName;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *fullName;

+ (void)warmUp;
+ (id)accessoryTypeGroupWithIdentifier:(id)a0;
+ (id)climateAccessoryTypeGroup;
+ (id)hiddenFromScenesAndAutomationsAccessoryTypeGroup;
+ (id)lightAccessoryTypeGroup;
+ (id)mediaAccessoryTypeGroup;
+ (id)otherAccessoryTypeGroup;
+ (id)outletAccessoryTypeGroup;
+ (id)securityAccessoryTypeGroup;
+ (id)switchAccessoryTypeGroup;
+ (id)unionGroups:(id)a0;
+ (id)waterAccessoryTypeGroup;
+ (id)sensorAccessoryTypeGroup;

- (void).cxx_destruct;
- (BOOL)containsType:(id)a0;
- (id)initWithAccessoryTypes:(id)a0;
- (id)_initWithIdentifier:(id)a0 name:(id)a1 set:(id)a2;
- (id)_initWithIdentifierString:(id)a0 name:(id)a1 accessoryTypes:(id)a2;
- (id)_initWithName:(id)a0 set:(id)a1;
- (id)filterAccessoryRepresentableObjects:(id)a0;
- (id)groupByIntersectingGroup:(id)a0;
- (id)groupBySubtractingGroup:(id)a0;
- (id)groupByUnioningGroup:(id)a0;
- (id)initWithName:(id)a0 accessoryTypes:(id)a1;
- (BOOL)intersectsGroup:(id)a0;

@end
