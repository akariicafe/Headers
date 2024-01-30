@class NSString, NSUUID, NSURL, NSDictionary, NSAttributedString, NSArray;

@interface VSSpeechRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL shouldStreamAudioData;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (copy, nonatomic) NSUUID *accessoryID;
@property (nonatomic) unsigned long long requestCreatedTimestamp;
@property (copy, nonatomic) id /* block */ stopHandler;
@property (copy, nonatomic) id /* block */ pauseHandler;
@property (nonatomic) long long pointer;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *voiceName;
@property (nonatomic) long long footprint;
@property (nonatomic) long long voiceType;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSURL *outputPath;
@property (nonatomic) BOOL shouldWaitCurrentSpeaking;
@property (nonatomic) BOOL disableDeviceRacing;
@property (nonatomic) BOOL shouldCache;
@property (nonatomic) double rate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (nonatomic) BOOL shouldWhisper;
@property (copy, nonatomic) NSDictionary *contextInfo;
@property (nonatomic) BOOL disableCompactVoiceFallback;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) BOOL forceServerTTS;
@property (nonatomic) BOOL canUseServerTTS;
@property (nonatomic) BOOL retryDeviceOnNetworkStall;
@property (nonatomic) long long powerProfile;
@property (copy, nonatomic) NSURL *resourceListURL;
@property (copy, nonatomic) NSURL *resourceSearchPathURL;
@property (retain, nonatomic) NSArray *customResourceURLs;
@property (retain, nonatomic) NSUUID *siriRequestId;

- (id)logText;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)canLogRequestText;
- (id)contextInfoString;
- (BOOL)isSimilarTo:(id)a0;
- (id)logUtterance;

@end
