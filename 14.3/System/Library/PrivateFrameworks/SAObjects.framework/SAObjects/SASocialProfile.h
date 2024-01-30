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

+ (id)socialProfileWithDictionary:(id)a0 context:(id)a1;
+ (id)socialProfile;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
