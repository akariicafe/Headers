@class NSString, GCControllerSettings, GCSettingsXPCProxyClientEndpoint;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCSettingsXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {
    GCControllerSettings *_initialSettingsForBundleID;
    GCControllerSettings *_initialSettingsDefault;
    GCSettingsXPCProxyClientEndpoint *_materializedObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)materializeWithContext:(id)a0;
- (id)initWithIdentifier:(id)a0 initialValueForBundleID:(id)a1 defaultSettings:(id)a2;

@end
