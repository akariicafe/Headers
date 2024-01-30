@class NSArray, NSString, GCPhysicalInputProfile;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCDevicePhysicalInputComponentDescription : NSObject <_GCControllerComponentDescription, _GCUpdatableIPCObjectDescription> {
    NSArray *_bindingDescriptions;
    GCPhysicalInputProfile *_materializedInputProfile;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *elementDescriptions;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_applyBinding:(id)a0 toComponent:(id)a1;
- (id)createWithContext:(id)a0;
- (id)initWithIdentifier:(id)a0 elements:(id)a1 bindings:(id)a2;
- (id)materializeWithContext:(id)a0;
- (BOOL)update:(id)a0 withContext:(id)a1;

@end
