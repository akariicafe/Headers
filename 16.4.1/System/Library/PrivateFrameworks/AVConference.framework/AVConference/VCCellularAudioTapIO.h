@class VCAudioIO, VCAudioPowerSpectrumSource;

@interface VCCellularAudioTapIO : NSObject {
    struct tagVCCellularAudioTapIORealtimeContext { long long streamToken; struct _VCAudioPowerSpectrumSourceRealtimeContext *powerSpectrumSourceRealtimeContext; } _realtimeContext;
}

@property (retain, nonatomic) VCAudioIO *audioIO;
@property (readonly, nonatomic) long long streamToken;
@property (readonly, nonatomic) VCAudioPowerSpectrumSource *powerSpectrumSource;
@property (readonly, nonatomic) struct tagVCCellularAudioTapIORealtimeContext { long long x0; struct _VCAudioPowerSpectrumSourceRealtimeContext *x1; } *realtimeContext;

- (void)dealloc;
- (id)initWithStreamToken:(long long)a0 powerSpectrumSource:(id)a1;

@end
