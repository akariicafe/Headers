@class NSNumber, NSString;

@interface SAEntryPoint : AceObject <SAAceSerializable, SAAceComparable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryPointWithDictionary:(id)a0 context:(id)a1;
+ (id)entryPoint;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
