@interface APPCMediaMetricsHelper : NSObject <APPCMediaMetricsHelping, APPCMetricRegister> {
    void /* unknown type, empty encoding */ visiblePercentage;
    void /* unknown type, empty encoding */ contextIdentifier;
    void /* unknown type, empty encoding */ promotedContentIdentifier;
    void /* unknown type, empty encoding */ primitiveCreator;
    void /* unknown type, empty encoding */ notificationOwner;
    void /* unknown type, empty encoding */ videoDuration;
    void /* unknown type, empty encoding */ videoURL;
    void /* unknown type, empty encoding */ videoQuality;
    void /* unknown type, empty encoding */ mediaHasStarted;
    void /* unknown type, empty encoding */ promotedContent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_initialVolumeSender;
}

- (void)mediaComplete;
- (id)init;
- (void).cxx_destruct;
- (void)mediaLoaded;
- (void)videoChosenWithVideoWidth:(float)a0 videoHeight:(float)a1;
- (void)mediaPlayedAtPosition:(double)a0;
- (void)mediaPausedAtPosition:(double)a0;
- (void)mediaSkippedAtPosition:(double)a0;
- (void)mediaVolumeChangedAtPosition:(double)a0 volume:(float)a1;
- (void)mediaExpandedAtPosition:(double)a0 fullScreen:(BOOL)a1;
- (void)mediaContractedAtPosition:(double)a0 fullScreen:(BOOL)a1;
- (void)mediaShowControlsAtPosition:(double)a0;
- (void)mediaStarted;
- (void)mediaFinished;
- (void)mediaProgress:(long long)a0;
- (void)updateVisiblePercentage:(long long)a0;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)a0;
- (void)removeHandler;
- (id)initWithContextIdentifier:(id)a0 promotedContentIdentifier:(id)a1 primitiveCreator:(id)a2 notificationOwner:(id)a3;

@end
