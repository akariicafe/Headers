@class CLLocation, NSString, NSArray, NSData, AFSpeechParameters, NSDictionary, NSURL;

@interface _AFSpeechParametersMutation : NSObject <AFSpeechParametersMutating> {
    AFSpeechParameters *_base;
    NSString *_language;
    NSString *_interactionIdentifier;
    NSString *_task;
    NSArray *_loggingContext;
    NSString *_applicationName;
    NSData *_profile;
    NSDictionary *_overrides;
    NSURL *_modelOverrideURL;
    NSURL *_originalAudioFileURL;
    BOOL _narrowband;
    BOOL _detectUtterances;
    BOOL _censorSpeech;
    BOOL _farField;
    BOOL _secureOfflineOnly;
    BOOL _shouldStoreAudioOnDevice;
    double _maximumRecognitionDuration;
    NSString *_inputOrigin;
    CLLocation *_location;
    NSArray *_jitGrammar;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasLanguage : 1; unsigned char hasInteractionIdentifier : 1; unsigned char hasTask : 1; unsigned char hasLoggingContext : 1; unsigned char hasApplicationName : 1; unsigned char hasProfile : 1; unsigned char hasOverrides : 1; unsigned char hasModelOverrideURL : 1; unsigned char hasOriginalAudioFileURL : 1; unsigned char hasNarrowband : 1; unsigned char hasDetectUtterances : 1; unsigned char hasCensorSpeech : 1; unsigned char hasFarField : 1; unsigned char hasSecureOfflineOnly : 1; unsigned char hasShouldStoreAudioOnDevice : 1; unsigned char hasMaximumRecognitionDuration : 1; unsigned char hasInputOrigin : 1; unsigned char hasLocation : 1; unsigned char hasJitGrammar : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setProfile:(id)a0;
- (void)setCensorSpeech:(BOOL)a0;
- (void)setApplicationName:(id)a0;
- (id)initWithBase:(id)a0;
- (void)setLanguage:(id)a0;
- (void)setOverrides:(id)a0;
- (void)setTask:(id)a0;
- (void)setLocation:(id)a0;
- (void).cxx_destruct;
- (void)setInteractionIdentifier:(id)a0;
- (void)setDetectUtterances:(BOOL)a0;
- (void)setMaximumRecognitionDuration:(double)a0;
- (void)setSecureOfflineOnly:(BOOL)a0;
- (BOOL)getCensorSpeech;
- (void)setInputOrigin:(id)a0;
- (id)getTask;
- (id)getApplicationName;
- (BOOL)getDetectUtterances;
- (BOOL)getFarField;
- (id)getInputOrigin;
- (id)getInteractionIdentifier;
- (id)getJitGrammar;
- (id)getLanguage;
- (id)getLocation;
- (id)getLoggingContext;
- (double)getMaximumRecognitionDuration;
- (id)getModelOverrideURL;
- (BOOL)getNarrowband;
- (id)getOriginalAudioFileURL;
- (id)getOverrides;
- (id)getProfile;
- (BOOL)getSecureOfflineOnly;
- (BOOL)getShouldStoreAudioOnDevice;
- (void)setFarField:(BOOL)a0;
- (void)setJitGrammar:(id)a0;
- (void)setLoggingContext:(id)a0;
- (void)setModelOverrideURL:(id)a0;
- (void)setNarrowband:(BOOL)a0;
- (void)setOriginalAudioFileURL:(id)a0;
- (void)setShouldStoreAudioOnDevice:(BOOL)a0;

@end
