@class SAUIDomainObjectPicker, SADomainObject;

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property (retain, nonatomic) SADomainObject *selectedItem;

+ (id)domainObjectPickerSelection;
+ (id)domainObjectPickerSelectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
