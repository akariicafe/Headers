@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, VCServerDelegate;

@interface VCCellularAudioTap : NSObject <VCAudioIODelegate, VCAudioPowerSpectrumSourceDelegate> {
    NSMutableDictionary *_audioTapIOMap;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _processId;
    long long _audioSessionId;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) id<VCServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)audioIOTypeFromTapType:(unsigned int)a0;

- (void)dealloc;
- (void)didStart:(BOOL)a0 error:(id)a1;
- (BOOL)addAudioTapForStreamToken:(long long)a0 tapType:(unsigned int)a1 error:(id *)a2;
- (struct _VCAudioIOInitConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; BOOL x6; id x7; int x8; id x9; void /* function */ *x10; void *x11; id x12; void /* function */ *x13; void *x14; unsigned int x15; unsigned int x16; BOOL x17; unsigned long long x18; unsigned int x19; long long x20; long long x21; unsigned long long x22; })audioIOConfigWithAudioType:(unsigned int)a0 realtimeContext:(void *)a1;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (void)didResume;
- (void)didResumeAudioIO:(id)a0;
- (void)didServerDie;
- (void)didStop:(BOOL)a0 error:(id)a1;
- (void)didSuspend;
- (void)didSuspendAudioIO:(id)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (id)initWithProcessId:(int)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (int)registerAudioTapForStreamToken:(long long)a0 tapType:(unsigned int)a1;
- (BOOL)removeAudioTapForStreamToken:(long long)a0 error:(id *)a1;
- (void)unregisterAudioTapForStreamToken:(long long)a0;

@end
