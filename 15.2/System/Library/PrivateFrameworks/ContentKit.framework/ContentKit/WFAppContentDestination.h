@class INAppDescriptor, NSString;

@interface WFAppContentDestination : WFContentDestination <NSSecureCoding, NSCopying, WFSerializableContent> {
    NSString *localizedTitle;
    NSString *_localizedTitle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long managedLevel;
@property (readonly, nonatomic) INAppDescriptor *appDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)destinationWithAppDescriptor:(id)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)destinationWithSystemAppBundleIdentifier:(id)a0;
+ (id)destinationWithSystemAppBundleIdentifier:(id)a0 promptingBehaviour:(unsigned long long)a1;
+ (id)destinationWithAppDescriptor:(id)a0 promptingBehaviour:(unsigned long long)a1;
+ (id)destinationWithAppDescriptor:(id)a0 managedLevel:(unsigned long long)a1;
+ (id)destinationWithAppDescriptor:(id)a0 managedLevel:(unsigned long long)a1 promptingBehaviour:(unsigned long long)a2;
+ (id)platformFileManagerDestination;

- (id)app;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedTitle;
- (id)wfSerializedRepresentation;
- (id)localizedMDMDescription;
- (id)initWithAppDescriptor:(id)a0 identifier:(id)a1 managedLevel:(unsigned long long)a2 promptingBehaviour:(unsigned long long)a3;

@end
