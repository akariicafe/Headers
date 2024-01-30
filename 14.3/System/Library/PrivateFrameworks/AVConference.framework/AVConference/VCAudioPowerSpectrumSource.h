@class NSString;

@interface VCAudioPowerSpectrumSource : VCObject <VCAudioIOSink> {
    struct _VCAudioPowerSpectrumSourceRealtimeContext { struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } powerSpectrumSinks; struct opaqueCMSimpleQueue *eventQueue; id powerSpectrumSourceDelegate; } _realtimeContext;
}

@property (readonly, nonatomic) long long streamToken;
@property (readonly, nonatomic) struct _VCAudioPowerSpectrumSourceRealtimeContext { struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *x0; BOOL x1; void /* function */ *x2; unsigned long long x3; } x0; struct opaqueCMSimpleQueue *x1; id x2; } *realtimeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStreamToken:(long long)a0 delegate:(id)a1;
- (void)invalidate;
- (void)cleanupAudioPowerSpectrumSinks;
- (void)cleanupQueue:(struct opaqueCMSimpleQueue **)a0;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { } *)a0;
- (void)registerAudioPowerSpectrumSink:(id)a0 callback:(void /* function */ *)a1;
- (void)unregisterAudioPowerSpectrumSink:(id)a0;

@end
