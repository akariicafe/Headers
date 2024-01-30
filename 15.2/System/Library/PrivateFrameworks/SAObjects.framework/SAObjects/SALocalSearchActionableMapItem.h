@class NSArray;

@interface SALocalSearchActionableMapItem : SALocalSearchMapItem

@property (copy, nonatomic) NSArray *commands;

+ (id)actionableMapItem;
+ (id)actionableMapItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
