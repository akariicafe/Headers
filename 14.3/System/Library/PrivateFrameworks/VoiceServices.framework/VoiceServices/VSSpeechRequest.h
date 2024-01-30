@class NSString, NSDictionary, NSURL, NSArray, NSAttributedString;

@interface VSSpeechRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic) unsigned long long requestCreatedTimestamp;
@property (copy, nonatomic) id /* block */ stopHandler;
@property (copy, nonatomic) id /* block */ pauseHandler;
@property (nonatomic) long long pointer;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) long long footprint;
@property (nonatomic) long long voiceType;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSURL *outputPath;
@property (nonatomic) BOOL shouldCache;
@property (nonatomic) double rate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (copy, nonatomic) NSDictionary *contextInfo;
@property (nonatomic) BOOL disableCompactVoiceFallback;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) BOOL forceServerTTS;
@property (nonatomic) BOOL canUseServerTTS;
@property (nonatomic) BOOL retryDeviceOnNetworkStall;
@property (copy, nonatomic) NSURL *resourceListURL;
@property (copy, nonatomic) NSURL *resourceSearchPathURL;
@property (retain, nonatomic) NSArray *customResourceURLs;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canLogRequestText;
- (id)contextInfoString;
- (id)logUtterance;
- (BOOL)isSimilarTo:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logText;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
