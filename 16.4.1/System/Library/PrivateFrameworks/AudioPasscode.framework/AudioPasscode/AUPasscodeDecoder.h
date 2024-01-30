@class AVAudioPCMBuffer, AUPasscodeCodecConfiguration, APCListenerResultData, AUAudioUnitBusArray, NSMutableData, NSObject, AUAudioUnitBus;
@protocol OS_dispatch_queue;

@interface AUPasscodeDecoder : AUAudioUnit {
    struct unique_ptr<caulk::concurrent::messenger, std::default_delete<caulk::concurrent::messenger>> { struct __compressed_pair<caulk::concurrent::messenger *, std::default_delete<caulk::concurrent::messenger>> { struct messenger *__value_; } __ptr_; } _rtMessenger;
    struct unique_ptr<APCDecoderBase, std::default_delete<APCDecoderBase>> { struct __compressed_pair<APCDecoderBase *, std::default_delete<APCDecoderBase>> { struct APCDecoderBase *__value_; } __ptr_; } _kernel;
    struct BufferedInputBus { AUAudioUnitBus *bus; unsigned int maxFrames; AVAudioPCMBuffer *pcmBuffer; struct AudioBufferList *originalAudioBufferList; struct AudioBufferList *mutableAudioBufferList; } _inputBus;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBusArray *_outputBusArray;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _rxDataBuffer;
    struct array<std::unique_ptr<DecodedDataMessage>, 10UL> { struct unique_ptr<DecodedDataMessage, std::default_delete<DecodedDataMessage>> { struct __compressed_pair<DecodedDataMessage *, std::default_delete<DecodedDataMessage>> { struct DecodedDataMessage *__value_; } __ptr_; } __elems_[10]; } _messagePool;
    struct map<unsigned int, std::any, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::any>>> { struct __tree<std::__value_type<unsigned int, std::any>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::any>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::any>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::any>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _apcDecoderConfig;
    unsigned int _desiredChannelCount;
    unsigned int _actualChannelCount;
    NSMutableData *_incomingPayload;
    BOOL _deliverDataSerially;
    struct unique_ptr<AudioCapturerIfc, std::default_delete<AudioCapturerIfc>> { struct __compressed_pair<AudioCapturerIfc *, std::default_delete<AudioCapturerIfc>> { struct AudioCapturerIfc *__value_; } __ptr_; } _inputCapturer;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _ctMutex;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (retain, nonatomic) AUPasscodeCodecConfiguration *codecConfig;
@property (retain, nonatomic) APCListenerResultData *resultData;

+ (struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })getAUDesc;
+ (void)registerAU;
+ (id)supportedDecoders;

- (id /* block */)internalRenderBlock;
- (id).cxx_construct;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id)outputBusses;
- (void).cxx_destruct;
- (void)deallocateRenderResources;
- (id)inputBusses;
- (void)setRenderingOffline:(BOOL)a0;
- (void)handleDecodedData:(void *)a0 ofLength:(int)a1;
- (void)startAudioLogCapture;
- (void)stopAudioLogCapture;

@end
