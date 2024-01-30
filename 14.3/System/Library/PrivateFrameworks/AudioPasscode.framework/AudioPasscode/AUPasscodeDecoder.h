@class AVAudioPCMBuffer, AUPasscodeCodecConfiguration, APCListenerResultData, AUAudioUnitBusArray, NSMutableData, NSObject, AUAudioUnitBus;
@protocol OS_dispatch_queue;

@interface AUPasscodeDecoder : AUAudioUnit {
    struct unique_ptr<CADeprecated::RealtimeMessenger, std::__1::default_delete<CADeprecated::RealtimeMessenger> > { struct __compressed_pair<CADeprecated::RealtimeMessenger *, std::__1::default_delete<CADeprecated::RealtimeMessenger> > { struct RealtimeMessenger *__value_; } __ptr_; } _rtMessenger;
    struct unique_ptr<APCDecoderBase, std::__1::default_delete<APCDecoderBase> > { struct __compressed_pair<APCDecoderBase *, std::__1::default_delete<APCDecoderBase> > { struct APCDecoderBase *__value_; } __ptr_; } _kernel;
    struct BufferedInputBus { AUAudioUnitBus *bus; unsigned int maxFrames; AVAudioPCMBuffer *pcmBuffer; struct AudioBufferList *originalAudioBufferList; struct AudioBufferList *mutableAudioBufferList; } _inputBus;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBusArray *_outputBusArray;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } _rxDataBuffer;
    struct vector<DecodedDataMessage, std::__1::allocator<DecodedDataMessage> > { struct DecodedDataMessage *__begin_; struct DecodedDataMessage *__end_; struct __compressed_pair<DecodedDataMessage *, std::__1::allocator<DecodedDataMessage> > { struct DecodedDataMessage *__value_; } __end_cap_; } _messagePool;
    struct map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > > { struct __tree<std::__1::__value_type<unsigned int, apc::Any>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, apc::Any> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, apc::Any>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _apcDecoderConfig;
    unsigned int _desiredChannelCount;
    unsigned int _actualChannelCount;
    NSMutableData *_incomingPayload;
    BOOL _deliverDataSerially;
    struct unique_ptr<AudioCapturerIfc, std::__1::default_delete<AudioCapturerIfc> > { struct __compressed_pair<AudioCapturerIfc *, std::__1::default_delete<AudioCapturerIfc> > { struct AudioCapturerIfc *__value_; } __ptr_; } _inputCapturer;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _ctMutex;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (retain, nonatomic) AUPasscodeCodecConfiguration *codecConfig;
@property (retain, nonatomic) APCListenerResultData *resultData;

+ (void)registerAU;
+ (struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })getAUDesc;
+ (id)supportedDecoders;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (id)outputBusses;
- (id)inputBusses;
- (void)setRenderingOffline:(BOOL)a0;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id /* block */)internalRenderBlock;
- (void)startAudioLogCapture;
- (void)stopAudioLogCapture;
- (void)handleDecodedData:(void *)a0 ofLength:(int)a1;

@end
