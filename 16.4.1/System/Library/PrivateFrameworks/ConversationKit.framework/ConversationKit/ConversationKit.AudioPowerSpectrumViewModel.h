@interface ConversationKit.AudioPowerSpectrumViewModel : NSObject {
    void /* unknown type, empty encoding */ call;
    void /* unknown type, empty encoding */ _localPowerSpectrum;
    void /* unknown type, empty encoding */ _remotePowerSpectrum;
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ localParticipantStreamToken;
    void /* unknown type, empty encoding */ remoteParticipantStreamToken;
    void /* unknown type, empty encoding */ observationTask;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ uplinkPowerTap;
    void /* unknown type, empty encoding */ downlinkPowerTap;
    void /* unknown type, empty encoding */ audioPowerTapQueue;
}

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
