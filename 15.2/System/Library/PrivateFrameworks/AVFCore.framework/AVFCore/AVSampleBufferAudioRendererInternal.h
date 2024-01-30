@class AVOutputContext, NSString, AVWeakReference, AVScheduledAudioParameters, AVMediaDataRequester, NSError;

@interface AVSampleBufferAudioRendererInternal : NSObject {
    NSString *audioOutputDeviceUniqueID;
    NSString *audioTimePitchAlgorithm;
    unsigned long long allowedAudioSpatializationFormats;
    struct opaqueMTAudioProcessingTap { } *audioProcessingTap;
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
    struct OpaqueFigSampleBufferAudioRenderer { } *figAudioRenderer;
    AVOutputContext *outputContext;
}

@end
