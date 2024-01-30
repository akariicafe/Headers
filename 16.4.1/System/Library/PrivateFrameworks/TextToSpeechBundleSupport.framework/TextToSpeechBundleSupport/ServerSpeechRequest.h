@class NSString, TTSSpeechServerInstance, NSArray, TTSSpeechRequest, NSURL, NSAttributedString, TTSVoiceResourceAsset, TTSSpeechString;

@interface ServerSpeechRequest : NSObject

@property (retain, nonatomic) NSString *voiceName;
@property (weak, nonatomic) TTSSpeechServerInstance *clientServer;
@property (weak, nonatomic) TTSSpeechRequest *clientRequest;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) NSURL *outputPathURL;
@property (nonatomic) long long footprint;
@property (nonatomic) long long voiceType;
@property (nonatomic) long long gender;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL notifyMarkStart;
@property (nonatomic) BOOL maintainInput;
@property (nonatomic) BOOL supportsAccurateWordCallbacks;
@property (nonatomic) BOOL skipLuthorRules;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (nonatomic) BOOL useSharedSession;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) unsigned int audioQueueFlags;
@property (retain, nonatomic) NSArray *channels;
@property (retain, nonatomic) TTSVoiceResourceAsset *voiceResource;
@property (retain, nonatomic) TTSSpeechString *speechString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastSentRange;
@property (copy, nonatomic) id /* block */ audioBufferCallback;
@property (nonatomic) BOOL synthesizeSilently;

- (void).cxx_destruct;

@end
