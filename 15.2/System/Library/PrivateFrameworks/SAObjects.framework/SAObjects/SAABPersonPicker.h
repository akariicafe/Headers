@class NSArray;

@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (copy, nonatomic) NSArray *persons;
@property (nonatomic) BOOL showImmediately;

+ (id)personPicker;
+ (id)personPickerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
