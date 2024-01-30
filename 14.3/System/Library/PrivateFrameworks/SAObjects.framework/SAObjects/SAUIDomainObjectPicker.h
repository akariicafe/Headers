@class NSString;

@interface SAUIDomainObjectPicker : SAUISnippet

@property (copy, nonatomic) NSString *idNodeName;

+ (id)domainObjectPickerWithDictionary:(id)a0 context:(id)a1;
+ (id)domainObjectPicker;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
