@class NSString;

@interface SAResultObjectReference : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *referenceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultObjectReference;
+ (id)resultObjectReferenceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
