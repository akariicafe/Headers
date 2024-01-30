@class NSArray, NSXPCConnection, AUParameterTree, AUAudioUnitBusArray_XPC;

@interface AUAudioUnit_XPC : AUAudioUnit {
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _propListenerMutex;
    struct OpaqueAudioComponentInstance { } *_componentInstance;
    NSXPCConnection *_xpcConnection;
    int _remotePID;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _remoteMachTimebaseInfo;
    BOOL _canRender;
    BOOL _canProcess;
    BOOL _removingObserverWithContext;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _parameterTreeMutex;
    AUAudioUnitBusArray_XPC *_inputBusses;
    AUAudioUnitBusArray_XPC *_outputBusses;
    struct unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData> > { struct __compressed_pair<AUProcAndUserData *, std::__1::default_delete<AUProcAndUserData> > { struct AUProcAndUserData *__value_; } __ptr_; } _elementCountListenerToken;
    struct vector<AUAudioUnit_XPC_PropListener, std::__1::allocator<AUAudioUnit_XPC_PropListener> > { struct AUAudioUnit_XPC_PropListener *__begin_; struct AUAudioUnit_XPC_PropListener *__end_; struct __compressed_pair<AUAudioUnit_XPC_PropListener *, std::__1::allocator<AUAudioUnit_XPC_PropListener> > { struct AUAudioUnit_XPC_PropListener *__value_; } __end_cap_; } _propListeners;
    struct shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::__1::recursive_mutex, caulk::empty_atomic_interface<auoop::RenderPipePool> > > { struct synchronized<auoop::RenderPipePool, std::__1::recursive_mutex, caulk::empty_atomic_interface<auoop::RenderPipePool> > *__ptr_; struct __shared_weak_count *__cntrl_; } _renderPipePool;
    struct optional<auoop::RenderPipeUser> { union { char __null_state_; struct RenderPipeUser { struct PipeSubPool *mPipeSubPool; struct AUOOPRenderClientUser { AUAudioUnit_XPC *au; NSXPCConnection *xpcConnection; id /* block */ musicalContextBlock; id /* block */ transportStateBlock; id /* block */ MIDIOutputEventBlock; unsigned int serviceProcessAUInstanceToken; BOOL isOffline; BOOL isMIDIProcessor; } mRenderClientUser; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } mInvalidated; } __val_; } ; BOOL __engaged_; } _renderPipeUser;
    AUParameterTree *_cachedParameterTree;
    NSArray *_userPresets;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (int)remoteProcessIdentifier;
- (id)speechVoices;
- (void)setCurrentPreset:(id)a0;
- (void)synthesizeSpeechRequest:(id)a0;
- (void)cancelSpeechRequest;
- (id)_getValueForKey:(id)a0;
- (id).cxx_construct;
- (void)didCrash;
- (id)parameterTree;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)outputBusses;
- (id)inputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id)_getBus:(unsigned int)a0 scope:(unsigned int)a1 error:(id *)a2;
- (void)propertiesChanged:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void)_setValue:(id)a0 forProperty:(id)a1 error:(id *)a2;
- (id)_getValueForProperty:(id)a0 error:(id *)a1;
- (BOOL)_setBusCount:(unsigned long long)a0 scope:(unsigned int)a1 error:(id *)a2;
- (void)setFullState:(id)a0;
- (void)_setComponentInstance:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)_doOpen:(id)a0 completion:(id /* block */)a1;
- (void)_parameterTreeChanged;
- (void)setMusicalContextBlock:(id /* block */)a0;
- (void)setTransportStateBlock:(id /* block */)a0;
- (void)internalDeallocateRenderResources;
- (id /* block */)internalRenderBlock;
- (id)userPresets;
- (void)_refreshBusses:(unsigned int)a0;
- (float)getV2Parameter:(unsigned long long)a0 sequenceNumber:(unsigned int)a1;
- (id)parametersForOverviewWithCount:(long long)a0;
- (id)supportedViewConfigurations:(id)a0;
- (void)selectViewConfiguration:(id)a0;
- (BOOL)providesUserInterface;
- (void)invalidateAllParameters;
- (id)profileStateForCable:(unsigned char)a0 channel:(unsigned char)a1;
- (BOOL)enableProfile:(id)a0 cable:(unsigned char)a1 onChannel:(unsigned char)a2 error:(id *)a3;
- (BOOL)disableProfile:(id)a0 cable:(unsigned char)a1 onChannel:(unsigned char)a2 error:(id *)a3;
- (void)_setState:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setFullStateForDocument:(id)a0;
- (BOOL)saveUserPreset:(id)a0 error:(id *)a1;
- (BOOL)deleteUserPreset:(id)a0 error:(id *)a1;
- (id)presetStateFor:(id)a0 error:(id *)a1;
- (BOOL)isLoadedInProcess;

@end
