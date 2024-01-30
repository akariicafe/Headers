@class AVWeakReference, NSString, AVContentKeySession, AVAudioSession, AVScheduledAudioParameters, AVMediaDataRequester, NSError, AVOutputContext;

@interface AVSampleBufferAudioRendererInternal : NSObject {
    NSString *audioOutputDeviceUniqueID;
    NSString *audioTimePitchAlgorithm;
    unsigned long long allowedAudioSpatializationFormats;
    struct opaqueMTAudioProcessingTap { } *audioProcessingTap;
    AVAudioSession *audioSession;
    struct { struct OpaqueFigSimpleMutex *mutex; AVMediaDataRequester *requester; } mediaDataRequester;
    float rate;
    float volume;
    BOOL muted;
    AVScheduledAudioParameters *scheduledAudioParameters;
    struct OpaqueCMTimebase { } *readOnlyControlTimebase;
    AVWeakReference *weakReferenceToSynchronizer;
    AVWeakReference *weakReferenceToSelf;
    long long status;
    NSError *error;
    AVContentKeySession *weakContentKeySession;
    struct opaqueCMFormatDescription { } *lastFormatDescription;
    struct OpaqueFigCPECryptor { } *lastCryptor;
    struct OpaqueFigSampleBufferAudioRenderer { } *figAudioRenderer;
    AVOutputContext *outputContext;
}

- (void).cxx_destruct;

@end
