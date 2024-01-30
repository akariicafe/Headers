@class NSString, NSArray;
@protocol NSSecureCoding, GCControllerComponent, NSCopying, NSObject;

@interface _GCControllerComponentDescription : NSObject <_GCControllerComponentDescription, _GCUpdatableIPCObjectDescription> {
    id<GCControllerComponent, NSSecureCoding> _component;
    NSArray *_bindingDescriptions;
    id<GCControllerComponent> _materializedComponent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithComponent:(id)a0;
- (id)materializeWithContext:(id)a0;
- (BOOL)update:(id)a0 withContext:(id)a1;
- (id)initWithComponent:(id)a0 bindings:(id)a1;
- (void)_applyBinding:(id)a0 toComponent:(id)a1;

@end
