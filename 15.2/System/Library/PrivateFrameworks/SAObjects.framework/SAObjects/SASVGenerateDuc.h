@class NSString, NSDictionary;

@interface SASVGenerateDuc : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *ducFamilyId;
@property (copy, nonatomic) NSString *ducId;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateDuc;
+ (id)generateDucWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
