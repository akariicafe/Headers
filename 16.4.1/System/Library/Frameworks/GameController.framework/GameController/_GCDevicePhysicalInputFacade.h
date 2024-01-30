@class GCPhysicalInputElementCollection, NSString, _GCDevicePhysicalInputBase;
@protocol GCDevice;

@interface _GCDevicePhysicalInputFacade : _GCDevicePhysicalInputView <GCDevicePhysicalInput, GCDevicePhysicalInputStateDiff> {
    _GCDevicePhysicalInputBase *_impl;
}

@property (readonly, weak) id<GCDevice> device;
@property (copy) id /* block */ elementValueDidChangeHandler;
@property (copy) id /* block */ inputStateAvailableHandler;
@property long long inputStateQueueDepth;
@property (readonly) double lastEventTimestamp;
@property (readonly) double lastEventLatency;
@property (readonly) GCPhysicalInputElementCollection *elements;
@property (readonly) GCPhysicalInputElementCollection *buttons;
@property (readonly) GCPhysicalInputElementCollection *axes;
@property (readonly) GCPhysicalInputElementCollection *switches;
@property (readonly) GCPhysicalInputElementCollection *dpads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKeyedSubscript:(id)a0;
- (id)capture;
- (id)init;
- (id)changedElements;
- (long long)changeForElement:(id)a0;
- (id)initWith:(id)a0 context:(id)a1;
- (id)nextInputState;

@end
