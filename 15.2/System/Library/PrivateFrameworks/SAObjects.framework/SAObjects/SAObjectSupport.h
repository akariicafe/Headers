@class NSString, NSArray;

@interface SAObjectSupport : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *aceVersion;
@property (copy, nonatomic) NSString *classId;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSArray *supportedProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectSupport;
+ (id)objectSupportWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
