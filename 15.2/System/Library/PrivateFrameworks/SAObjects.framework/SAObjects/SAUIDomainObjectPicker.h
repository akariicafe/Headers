@class NSString;

@interface SAUIDomainObjectPicker : SAUISnippet

@property (copy, nonatomic) NSString *idNodeName;

+ (id)domainObjectPicker;
+ (id)domainObjectPickerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
