@class NSString, NSArray, NSData, NSDictionary, NSURL, CLLocation;

@interface AFSpeechParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *interactionIdentifier;
@property (readonly, copy, nonatomic) NSString *task;
@property (readonly, copy, nonatomic) NSArray *loggingContext;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (readonly, copy, nonatomic) NSData *profile;
@property (readonly, copy, nonatomic) NSDictionary *overrides;
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL;
@property (readonly, copy, nonatomic) NSURL *originalAudioFileURL;
@property (readonly, nonatomic) BOOL narrowband;
@property (readonly, nonatomic) BOOL detectUtterances;
@property (readonly, nonatomic) BOOL censorSpeech;
@property (readonly, nonatomic) BOOL farField;
@property (readonly, nonatomic) BOOL secureOfflineOnly;
@property (readonly, nonatomic) BOOL shouldStoreAudioOnDevice;
@property (readonly, nonatomic) double maximumRecognitionDuration;
@property (readonly, copy, nonatomic) NSString *inputOrigin;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, copy, nonatomic) NSArray *jitGrammar;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithLanguage:(id)a0 interactionIdentifier:(id)a1 task:(id)a2 loggingContext:(id)a3 applicationName:(id)a4 profile:(id)a5 overrides:(id)a6 modelOverrideURL:(id)a7 originalAudioFileURL:(id)a8 narrowband:(BOOL)a9 detectUtterances:(BOOL)a10 censorSpeech:(BOOL)a11 farField:(BOOL)a12 secureOfflineOnly:(BOOL)a13 shouldStoreAudioOnDevice:(BOOL)a14 maximumRecognitionDuration:(double)a15 inputOrigin:(id)a16 location:(id)a17 jitGrammar:(id)a18;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
