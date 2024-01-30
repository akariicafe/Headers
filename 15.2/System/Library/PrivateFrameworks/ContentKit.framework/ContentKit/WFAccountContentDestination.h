@class NSString;

@interface WFAccountContentDestination : WFAppContentDestination <NSSecureCoding, NSCopying, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)destinationWithAccountIdentifier:(id)a0 appDescriptor:(id)a1;
+ (id)destinationWithAccountIdentifier:(id)a0 appDescriptor:(id)a1 promptingBehaviour:(unsigned long long)a2;
+ (id)destinationWithAccountIdentifier:(id)a0 appDescriptor:(id)a1 managedLevel:(unsigned long long)a2;
+ (id)destinationWithAccountIdentifier:(id)a0 appDescriptor:(id)a1 managedLevel:(unsigned long long)a2 promptingBehaviour:(unsigned long long)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)wfSerializedRepresentation;
- (id)localizedMDMDescription;
- (id)initWithAccountIdentifier:(id)a0 appDescriptor:(id)a1 managedLevel:(unsigned long long)a2 promptingBehaviour:(unsigned long long)a3;
- (id)appContentDestination;

@end
