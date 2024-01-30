@class AUAudioUnit, NSUUID, NSXPCConnection, AUParameterTree, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_voucher, OS_dispatch_source;

@interface AURemoteHost : NSObject <AUAudioUnitXPCProtocol> {
    AUAudioUnit *_audioUnit;
    NSXPCConnection *_remoteHostXPCConnection;
    struct optional<AUOOPRenderingServerUser> { union { char __null_state_; struct AUOOPRenderingServerUser { void /* function */ **_vptr$CAPrint; unsigned int mSerialNum; AUAudioUnit *mAUAudioUnit; id /* block */ mRetainedRenderBlock; id /* block */ mRenderBlock; BOOL mCanProcessInPlace; BOOL mIsV2AudioUnit; long long mMIDIOutBaseSampleTime; struct AUEventSchedule *mEventSchedule; struct AUOOPSharedMemory *mSharedBuffers; struct optional<std::__thread_id> { union { char __null_state_; struct __thread_id { struct _opaque_pthread_t *__id_; } __val_; } ; BOOL __engaged_; } mRenderThreadId; } __val_; } ; BOOL __engaged_; } _renderServerUser;
    NSObject<OS_voucher> *_initializationVoucher;
    AUParameterTree *_cachedParameterTree;
    struct reply_watchdog_factory { BOOL mDebugging; int mDefaultTimeoutMS; struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } mTimeoutHandler; } _replyWatchdogFactory;
    NSObject<OS_dispatch_queue> *_presetMonitoringQueue;
    NSObject<OS_dispatch_source> *_presetFolderWatcher;
    NSMutableArray *_userPresets;
    struct shared_ptr<auoop::WorkgroupMirror> { struct WorkgroupMirror *__ptr_; struct __shared_weak_count *__cntrl_; } _workgroupMirror;
    struct KVOAggregator { struct vector<KVOAggregator::Record, std::allocator<KVOAggregator::Record>> { struct Record *__begin_; struct Record *__end_; struct __compressed_pair<KVOAggregator::Record *, std::allocator<KVOAggregator::Record>> { struct Record *__value_; } __end_cap_; } mRecords; } _kvoAggregator;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyObserverQueue;
@property (nonatomic) int deferPropertyChangeNotifications;
@property (readonly, nonatomic) NSMutableArray *pendingChangedProperties;
@property (readonly, nonatomic) struct AudioComponentDescription { unsigned int componentType; unsigned int componentSubType; unsigned int componentManufacturer; unsigned int componentFlags; unsigned int componentFlagsMask; } componentDescription;
@property (readonly, nonatomic) NSUUID *audioUnitUUID;

+ (void)_staticInit;

- (void)reset:(id /* block */)a0;
- (void)setBlocks;
- (id)audioUnit;
- (void).cxx_destruct;
- (void)getBusses:(unsigned int)a0 reply:(id /* block */)a1;
- (void)initialize:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)updateHostCallbacks:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)createRenderPipe:(int)a0 formats:(id)a1 maxFrames:(unsigned int)a2 midiOutSizeHint:(unsigned int)a3 resources:(id)a4 reply:(id /* block */)a5;
- (void)destroyRenderPipe:(unsigned int)a0 reply:(id /* block */)a1;
- (void)updateWorkgroupMirror:(id)a0 reply:(id /* block */)a1;
- (void)uninitialize:(id /* block */)a0;
- (void)setBusFormat:(unsigned int)a0 scope:(unsigned int)a1 format:(id)a2 reply:(id /* block */)a3;
- (void)setBusCount:(unsigned long long)a0 scope:(unsigned int)a1 reply:(id /* block */)a2;
- (void)valueForProperty:(id)a0 propagateError:(BOOL)a1 reply:(id /* block */)a2;
- (void)setValue:(id)a0 forProperty:(id)a1 propagateError:(BOOL)a2 reply:(id /* block */)a3;
- (void)addPropertyObserver:(id)a0 context:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)removePropertyObserver:(id)a0 context:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)valueForKey:(id)a0 reply:(id /* block */)a1;
- (void)setValue:(id)a0 forKey:(id)a1 reply:(id /* block */)a2;
- (void)getParameterTree:(id /* block */)a0;
- (void)getParameter:(unsigned long long)a0 sequenceNumber:(unsigned int)a1 reply:(id /* block */)a2;
- (void)parameterStringFromValue:(float)a0 currentValue:(BOOL)a1 address:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)parameterValueFromString:(id)a0 address:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)parameterNode:(id)a0 displayNameWithLength:(long long)a1 reply:(id /* block */)a2;
- (void)parametersForOverviewWithCount:(long long)a0 reply:(id /* block */)a1;
- (void)supportedViewConfigurations:(id)a0 reply:(id /* block */)a1;
- (void)selectViewConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)profileStateForCable:(unsigned char)a0 channel:(unsigned char)a1 reply:(id /* block */)a2;
- (void)enableProfile:(id)a0 cable:(unsigned char)a1 onChannel:(unsigned char)a2 reply:(id /* block */)a3;
- (void)disableProfile:(id)a0 cable:(unsigned char)a1 onChannel:(unsigned char)a2 reply:(id /* block */)a3;
- (void)loadUserPresets:(id /* block */)a0;
- (void)saveUserPreset:(id)a0 state:(id)a1 reply:(id /* block */)a2;
- (void)deleteUserPreset:(id)a0 reply:(id /* block */)a1;
- (void)presetStateFor:(id)a0 reply:(id /* block */)a1;
- (void)synthesizeSpeechRequest:(id)a0 reply:(id /* block */)a1;
- (void)cancelSpeechRequest:(id /* block */)a0;
- (void)getSpeechVoices:(id /* block */)a0;
- (void)syncParameter:(unsigned long long)a0 value:(float)a1 extOriginator:(unsigned long long)a2 hostTime:(unsigned long long)a3 eventType:(unsigned int)a4;
- (id)_getBus:(unsigned int)a0 scope:(unsigned int)a1 error:(id *)a2;
- (BOOL)_identifyBus:(id)a0 scope:(unsigned int *)a1 element:(unsigned int *)a2;
- (id)_internalInitWithInputItems:(id)a0 xpcConnection:(id)a1;
- (id)initWithInputItems:(id)a0 xpcConnection:(id)a1;
- (id)initWithInputItems:(id)a0 xpcConnection:(id)a1 timeOutHandler:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (id)_getSpeechSynthesisProviderAudioUnit;
- (void)openImpl:(id)a0 reply:(id /* block */)a1;
- (id)currentParameterTree;
- (void)setBusName:(unsigned int)a0 scope:(unsigned int)a1 name:(id)a2 reply:(id /* block */)a3;
- (id)_fetchAndClearPendingChangedProperties;
- (void)startUserPresetFolderMonitoring;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)close:(id /* block */)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)open:(id /* block */)a0;

@end
