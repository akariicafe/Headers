@class NSString, _GCDevicePhysicalInputBase;
@protocol NSSecureCoding, NSCopying, NSObject, GCDevice;

@interface _GCDevicePhysicalInputComponent : NSObject <_GCGamepadEventSink, GCDeviceComponent> {
    id _gamepadEventObservation;
    id<GCDevice> _device;
    _GCDevicePhysicalInputBase *_physicalInput;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDispatchQueue:(id)a0;
- (void)setDevice:(id)a0;
- (id)capture;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 defaultPhysicalInput:(id)a1;
- (void)setGamepadEventSource:(id)a0;

@end
