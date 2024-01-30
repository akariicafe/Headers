@class NSString, NSURL, FMDAccessoryIdentifier, FMDAudioAccessoryInfo;

@interface FMDGenericAudioAccessory : NSObject <NSSecureCoding, FMDAudioAccessory, FMDAccessory>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) FMDAccessoryIdentifier *accessoryIdentifier;
@property (retain, nonatomic) NSString *audioRoutingIdentifier;
@property (retain, nonatomic) NSURL *audioURL;
@property (retain, nonatomic) FMDAudioAccessoryInfo *audioAccessoryInfo;
@property (readonly, nonatomic) unsigned long long audioSafetyStatus;
@property (readonly, nonatomic) BOOL playingSound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyAccessory:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)updateAudioAsset:(id)a0;
- (BOOL)updatePlaybackChannels:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
