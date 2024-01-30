@class NSString, NSUUID, CSAudioInjectionEngine;

@interface CSAudioInjectionDevice : NSObject

@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSUUID *deviceUID;
@property (readonly, nonatomic) NSString *productIdentifier;
@property (nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isPluginDevice;
@property (nonatomic) BOOL enableAlwaysOnVoiceTrigger;
@property (weak, nonatomic) CSAudioInjectionEngine *injectionEngine;

- (void).cxx_destruct;
- (id)initWithDeviceType:(long long)a0 deviceName:(id)a1 deviceID:(id)a2 productID:(id)a3;
- (BOOL)speakAudio:(id)a0;
- (BOOL)speakAudio:(id)a0 withScaleFactor:(float)a1 outASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2 playbackStarted:(id /* block */)a3 completion:(id /* block */)a4;
- (BOOL)speakAudio:(id)a0 withScaleFactor:(float)a1 playbackStarted:(id /* block */)a2 completion:(id /* block */)a3;

@end
