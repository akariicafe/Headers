@protocol SVXSpeechSynthesisListening, SVXServiceCommandHandling, SVXAudioStreamingListening, SVXSessionActivityListening, SVXSiriModesManaging, SVXAudioPowerUpdateListening, SVXClientAudioSystemServicing;

@interface SVXPlatformDependency : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<SVXServiceCommandHandling> serviceCommandHandler;
@property (readonly, nonatomic) id<SVXSessionActivityListening> activityListener;
@property (readonly, nonatomic) id<SVXAudioPowerUpdateListening> audioPowerUpdateListener;
@property (readonly, nonatomic) id<SVXSiriModesManaging> siriModesManager;
@property (readonly, nonatomic) id<SVXAudioStreamingListening> audioStreamingListener;
@property (readonly, nonatomic) id<SVXSpeechSynthesisListening> speechSynthesisListener;
@property (readonly, nonatomic) id<SVXClientAudioSystemServicing> clientAudioSystemService;

- (void).cxx_destruct;
- (id)initWithAudioStreamingListener:(id)a0;
- (id)initWithAudioPowerUpdateListener:(id)a0;
- (id)initWithClientAudioSystemService:(id)a0;
- (id)initWithServiceCommandHandler:(id)a0;
- (id)initWithSessionActivityListener:(id)a0;
- (id)initWithSiriModesManager:(id)a0;
- (id)initWithSpeechSynthesisListener:(id)a0;

@end
