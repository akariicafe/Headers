@class NSDictionary, INAppDescriptor, NSString;

@interface WFAppContentLocation : WFContentLocation <NSSecureCoding, NSCopying, WFSerializableContent> {
    NSString *localizedTitle;
    NSString *_localizedTitle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long managedLevel;
@property (readonly, nonatomic) NSDictionary *serializedAppDescriptor;
@property (readonly, nonatomic) INAppDescriptor *appDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationWithAppDescriptor:(id)a0;
+ (id)locationWithAppDescriptor:(id)a0 promptingBehaviour:(unsigned long long)a1;
+ (id)locationWithSystemAppBundleIdentifier:(id)a0;
+ (id)locationWithSystemAppBundleIdentifier:(id)a0 promptingBehaviour:(unsigned long long)a1;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)locationWithAppDescriptor:(id)a0 managedLevel:(unsigned long long)a1;
+ (id)locationWithAppDescriptor:(id)a0 managedLevel:(unsigned long long)a1 promptingBehaviour:(unsigned long long)a2;
+ (id)platformFileManagerLocation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)app;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedTitle;
- (BOOL)isEqual:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (id)localizedMDMDescription;
- (id)initWithAppDescriptor:(id)a0 serializedAppDescriptor:(id)a1 identifier:(id)a2 managedLevel:(unsigned long long)a3 promptingBehaviour:(unsigned long long)a4;

@end
