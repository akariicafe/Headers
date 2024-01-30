@class NSString, NSDictionary, _GCDevicePhysicalInputElementsCollection, _GCDevicePhysicalInputElementsArray, _GCDevicePhysicalInputStateTable, _GCDevicePhysicalInputFacade;
@protocol GCDevice;

@interface _GCDevicePhysicalInputBase : NSObject <_GCDevicePhysicalInputViewState> {
    id<GCDevice> _device;
    unsigned long long _elementCount;
    id *_indexedElements;
    NSDictionary *_elementIndexByAlias;
    struct __CFArray { } *_additionalViews;
    _GCDevicePhysicalInputElementsArray *_indexedElementViews;
    _GCDevicePhysicalInputElementsCollection *_elementCollection;
    _GCDevicePhysicalInputStateTable *_viewProperties;
    _GCDevicePhysicalInputStateTable *_viewState;
    _GCDevicePhysicalInputFacade *_facade;
}

@property (readonly, getter=isSnapshot) BOOL snapshot;
@property (readonly) double lastEventTimestamp;
@property (readonly) double lastEventLatency;
@property (weak) id<GCDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)view:(id)a0 setPrimitiveValue:(unsigned long long)a1 forSlot:(unsigned long long *)a2;
- (id)_initWithFacadeTemplate:(id)a0 elementsTemplates:(id)a1 context:(id)a2;
- (id)view:(id)a0 objectValueForSlot:(unsigned long long *)a1;
- (unsigned long long)view:(id)a0 primitiveValueForSlot:(unsigned long long *)a1;
- (void)view:(id)a0 setObjectValue:(id)a1 forSlot:(unsigned long long *)a2 policy:(unsigned long long)a3;
- (id)view:(id)a0 viewForSlot:(unsigned long long *)a1;

@end
