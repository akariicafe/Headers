@class SAPerson;

@interface SACFPEXContactNameItem : SACFPEXItem

@property (retain, nonatomic) SAPerson *person;

+ (id)contactNameItem;
+ (id)contactNameItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
