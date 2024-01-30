@class AUV2BridgeBusArray, AUParameterTree, NSObject;
@protocol OS_dispatch_queue;

@interface AUAudioUnitV2Bridge : AUAudioUnit {
    NSObject<OS_dispatch_queue> *_eventListenerQueue;
    struct AUListenerBase { } *_eventListener;
    struct AUListenerBase { } *_parameterListener;
    BOOL _removingObserverWithContext;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _willSetFullState;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int __a_value; } __a_; } _eventsTriggeringParameterTreeInvalidation;
    NSObject<OS_dispatch_queue> *_parameterTreeRebuildQueue;
    struct OpaqueAudioComponentInstance { } *_audioUnit;
    BOOL _audioUnitIsOwned;
    AUV2BridgeBusArray *_inputBusses;
    AUV2BridgeBusArray *_outputBusses;
    AUParameterTree *_cachedParameterTree;
    struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer> > { struct __compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer> > { struct AUAudioUnitV2Bridge_Renderer *__value_; } __ptr_; } _renderer;
    id /* block */ _MIDIOutputEventBlock;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)deliverV2Parameters:(const union AURenderEvent { struct AURenderEventHeader { union AURenderEvent)qCC { } *x0; long long x1; unsigned char x2; unsigned char x3; } x0; struct AUParameterEvent { union AURenderEvent)qC[3C]IQf { } *x0; long long x1; unsigned char x2; unsigned char x3[3]; unsigned int x4; unsigned long long x5; float x6; } x1; struct AUMIDIEvent { union AURenderEvent)qCCSC[3C] { } *x0; long long x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned char x5; unsigned char x6[3]; } x2; } *)a0;
- (id)channelCapabilities;
- (id)_valueForProperty:(id)a0 error:(id *)a1;
- (void)_setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)osWorkgroup;
- (id /* block */)MIDIOutputEventBlock;
- (void)init2;
- (void).cxx_destruct;
- (void)reset;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)dealloc;
- (BOOL)_setElementCount:(unsigned int)a0 count:(unsigned int)a1 error:(id *)a2;
- (BOOL)_elementCountWritable:(unsigned int)a0;
- (unsigned int)_elementCount:(unsigned int)a0;
- (void)_rebuildBusses:(unsigned int)a0;
- (void)_notifyParameterChange:(unsigned long long)a0;
- (id)_buildNewParameterTree;
- (void)_invalidateParameterTree:(unsigned int)a0;
- (void)_createEventListenerQueue;
- (id)_createParameterTree;
- (void)setCurrentPreset:(id)a0;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 description:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1;
- (id).cxx_construct;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (id)parameterTree;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)outputBusses;
- (id)inputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (void)invalidateAudioUnit;
- (struct OpaqueAudioComponentInstance { } *)audioUnit;
- (void)setMIDIOutputEventBlock:(id /* block */)a0;
- (int)enableBus:(unsigned int)a0 scope:(unsigned int)a1 enable:(BOOL)a2;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void)setFullState:(id)a0;
- (void)setMusicalContextBlock:(id /* block */)a0;
- (void)setTransportStateBlock:(id /* block */)a0;
- (void)internalDeallocateRenderResources;
- (id /* block */)internalRenderBlock;
- (void)setFullStateForDocument:(id)a0;

@end
