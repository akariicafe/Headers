@class NSString, NSArray, GCAdaptiveTriggersXPCProxyClientEndpoint;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCAdaptiveTriggersXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {
    NSArray *_initialStatuses;
    GCAdaptiveTriggersXPCProxyClientEndpoint *_materializedObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)materializeWithContext:(id)a0;
- (id)initWithIdentifier:(id)a0 initialStatuses:(id)a1;

@end
