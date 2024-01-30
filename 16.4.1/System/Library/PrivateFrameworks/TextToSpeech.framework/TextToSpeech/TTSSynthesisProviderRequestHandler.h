@class AVSpeechSynthesisProviderRequest, NSMutableArray;
@protocol TTSSynthesisProviderHandlerDelegate;

@interface TTSSynthesisProviderRequestHandler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
}

@property (retain, nonatomic) AVSpeechSynthesisProviderRequest *managingSpeechRequest;
@property (nonatomic) unsigned int currentAudioBufferFrameCount;
@property (nonatomic) unsigned long long bytesPerFrame;
@property (retain, nonatomic) NSMutableArray *queuedMarkers;
@property (nonatomic) BOOL isFinishedReceivingBuffers;
@property (weak, nonatomic) id<TTSSynthesisProviderHandlerDelegate> delegate;

- (void).cxx_destruct;
- (void)addBuffers:(id)a0;
- (void)addMarkers:(id)a0;
- (void)completedRequestRendering;
- (id)dequeueMarkersUpToFrame:(long long)a0;
- (id)initWithRequest:(id)a0 bytesPerFrame:(unsigned long long)a1;

@end
