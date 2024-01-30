@class AFPowerContextPolicy, NSString, NSArray, NSDictionary, CLLocation;

@interface LBLocalSpeechRecognitionSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) NSString *inputOrigin;
@property (readonly, nonatomic) unsigned long long speechRecognitionTask;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSArray *jitGrammar;
@property (readonly, nonatomic) NSString *overrideModelPath;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) BOOL detectUtterances;
@property (readonly, nonatomic) BOOL continuousListening;
@property (readonly, nonatomic) BOOL shouldHandleCapitalization;
@property (readonly, nonatomic) BOOL secureOfflineOnly;
@property (readonly, nonatomic) double maximumRecognitionDuration;
@property (readonly, nonatomic) NSDictionary *recognitionOverrides;
@property (readonly, nonatomic) BOOL shouldStoreAudioOnDevice;
@property (readonly, nonatomic) BOOL deliverEagerPackage;
@property (readonly, nonatomic) BOOL enableEmojiRecognition;
@property (readonly, nonatomic) BOOL enableAutoPunctuation;
@property (readonly, nonatomic) NSString *UILanguage;
@property (readonly, nonatomic) BOOL enableVoiceCommands;
@property (readonly, nonatomic) NSString *dictationUIInteractionId;
@property (readonly, nonatomic) NSArray *sharedUserInfos;
@property (readonly, nonatomic) NSString *prefixText;
@property (readonly, nonatomic) NSString *postfixText;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) AFPowerContextPolicy *powerContext;

+ (id)taskString:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 enableEmojiRecognition:(BOOL)a15 enableAutoPunctuation:(BOOL)a16 UILanguage:(id)a17 enableVoiceCommands:(BOOL)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20 prefixText:(id)a21 postfixText:(id)a22 selectedText:(id)a23 powerContext:(id)a24;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 enableEmojiRecognition:(BOOL)a15 enableAutoPunctuation:(BOOL)a16 UILanguage:(id)a17 enableVoiceCommands:(BOOL)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 enableEmojiRecognition:(BOOL)a15 enableAutoPunctuation:(BOOL)a16 UILanguage:(id)a17 enableVoiceCommands:(BOOL)a18 dictationUIInteractionId:(id)a19 sharedUserInfos:(id)a20 prefixText:(id)a21 postfixText:(id)a22 selectedText:(id)a23;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17 UILanguage:(id)a18;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17 UILanguage:(id)a18 enableVoiceCommands:(BOOL)a19;
- (id)initWithRequestId:(id)a0 inputOrigin:(id)a1 speechRecognitionTaskName:(unsigned long long)a2 location:(id)a3 jitGrammar:(id)a4 overrideModelPath:(id)a5 applicationName:(id)a6 detectUtterances:(BOOL)a7 continuousListening:(BOOL)a8 shouldHandleCapitalization:(BOOL)a9 secureOfflineOnly:(BOOL)a10 maximumRecognitionDuration:(double)a11 recognitionOverrides:(id)a12 shouldStoreAudioOnDevice:(BOOL)a13 deliverEagerPackage:(BOOL)a14 sharedUserIds:(id)a15 enableEmojiRecognition:(BOOL)a16 enableAutoPunctuation:(BOOL)a17 UILanguage:(id)a18 enableVoiceCommands:(BOOL)a19 dictationUIInteractionId:(id)a20;

@end
