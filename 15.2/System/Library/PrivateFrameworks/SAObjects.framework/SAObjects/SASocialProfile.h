@class NSString;

@interface SASocialProfile : AceObject <SAAceSerializable, SAAceComparable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *userName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)socialProfile;
+ (id)socialProfileWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
