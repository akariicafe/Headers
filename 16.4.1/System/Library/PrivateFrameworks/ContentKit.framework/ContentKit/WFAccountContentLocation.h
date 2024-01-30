@class NSString;

@interface WFAccountContentLocation : WFAppContentLocation <NSSecureCoding, NSCopying, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationWithAccountIdentifier:(id)a0 appDescriptor:(id)a1;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)locationWithAccountIdentifier:(id)a0 appDescriptor:(id)a1 promptingBehaviour:(unsigned long long)a2;
+ (id)locationWithAccountIdentifier:(id)a0 appDescriptor:(id)a1 managedLevel:(unsigned long long)a2;
+ (id)locationWithAccountIdentifier:(id)a0 appDescriptor:(id)a1 managedLevel:(unsigned long long)a2 promptingBehaviour:(unsigned long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (id)localizedMDMDescription;
- (id)appContentLocation;
- (id)initWithAccountIdentifier:(id)a0 appDescriptor:(id)a1 serializedAppDescriptor:(id)a2 managedLevel:(unsigned long long)a3 promptingBehaviour:(unsigned long long)a4;

@end
