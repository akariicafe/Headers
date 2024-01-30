@class NSString, NSSet;

@interface HFCharacteristicGroup : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long groupSortPriority;
@property (readonly, copy, nonatomic) NSSet *characteristicTypes;

+ (id)_targetCurrentStateCharacteristicTypeMap;
+ (id)_targetCurrentStateCharacteristicGroups;
+ (id)_currentTargetStateCharacteristicTypeMap;
+ (id)allCharacteristicGroups;
+ (id)groupedTitleForCharacteristicType:(id)a0;
+ (id)characteristicGroupForCharacteristicType:(id)a0;
+ (id)characteristicGroupForIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithID:(id)a0 title:(id)a1 characteristicTypes:(id)a2;

@end
