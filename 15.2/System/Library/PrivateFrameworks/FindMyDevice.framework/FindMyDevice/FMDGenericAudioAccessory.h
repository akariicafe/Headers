@class NSString, NSURL, FMDAccessoryIdentifier, FMDAudioAccessoryInfo;

@interface FMDGenericAudioAccessory : NSObject <NSSecureCoding, FMDAudioAccessory, FMDAccessory>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) FMDAccessoryIdentifier *accessoryIdentifier;
@property (retain, nonatomic) NSString *audioRoutingIdentifier;
@property (retain, nonatomic) NSURL *audioURL;
@property (retain, nonatomic) FMDAudioAccessoryInfo *audioAccessoryInfo;
@property (nonatomic) BOOL supportsChangingListeningMode;
@property (readonly, nonatomic) unsigned long long audioSafetyStatus;
@property (readonly, nonatomic) BOOL playingSound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyAccessory:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)updateAudioAsset:(id)a0;
- (id)initWithAccessoryId:(id)a0 audioRoutingIdentifier:(id)a1 audioURL:(id)a2 audioAccessoryInfo:(id)a3 supportsChangingListeningMode:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)updatePlaybackChannels:(id)a0;

@end
