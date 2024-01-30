@class NSString, _GCMotionEventHIDAdapter, _GCCControllerHIDServiceInfoDescription;
@protocol _GCHIDEventSourceDescription;

@interface _GCMotionEventHIDAdapterDescription : NSObject <_GCMotionEventSourceDescription> {
    id<_GCHIDEventSourceDescription> _sourceDescription;
    _GCCControllerHIDServiceInfoDescription *_serviceDescription;
    _GCMotionEventHIDAdapter *_materializedObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 service:(id)a1;
- (id)materializeWithContext:(id)a0;

@end
