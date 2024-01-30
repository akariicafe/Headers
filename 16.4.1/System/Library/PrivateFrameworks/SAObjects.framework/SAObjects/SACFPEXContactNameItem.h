@class SAPerson;

@interface SACFPEXContactNameItem : SACFPEXItem

@property (retain, nonatomic) SAPerson *person;

+ (id)contactNameItem;
+ (id)contactNameItemWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
