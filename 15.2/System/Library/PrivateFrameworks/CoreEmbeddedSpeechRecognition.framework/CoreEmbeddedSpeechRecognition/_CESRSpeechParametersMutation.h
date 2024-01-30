@class CLLocation, NSString, NSArray, CESRSpeechParameters, NSData, NSDictionary, NSURL;

@interface _CESRSpeechParametersMutation : NSObject <CESRSpeechParametersMutating> {
    CESRSpeechParameters *_baseModel;
    NSString *_language;
    NSString *_requestIdentifier;
    NSString *_dictationUIInteractionIdentifier;
    NSString *_task;
    NSArray *_loggingContext;
    NSString *_applicationName;
    NSData *_profile;
    NSDictionary *_overrides;
    NSURL *_modelOverrideURL;
    NSURL *_originalAudioFileURL;
    NSString *_codec;
    BOOL _narrowband;
    BOOL _detectUtterances;
    BOOL _censorSpeech;
    BOOL _farField;
    BOOL _secureOfflineOnly;
    BOOL _shouldStoreAudioOnDevice;
    BOOL _continuousListening;
    BOOL _shouldHandleCapitalization;
    BOOL _isSpeechAPIRequest;
    double _maximumRecognitionDuration;
    double _endpointStart;
    NSString *_inputOrigin;
    CLLocation *_location;
    NSArray *_jitGrammar;
    BOOL _deliverEagerPackage;
    BOOL _disableDeliveringAsrFeatures;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasLanguage : 1; unsigned char hasRequestIdentifier : 1; unsigned char hasDictationUIInteractionIdentifier : 1; unsigned char hasTask : 1; unsigned char hasLoggingContext : 1; unsigned char hasApplicationName : 1; unsigned char hasProfile : 1; unsigned char hasOverrides : 1; unsigned char hasModelOverrideURL : 1; unsigned char hasOriginalAudioFileURL : 1; unsigned char hasCodec : 1; unsigned char hasNarrowband : 1; unsigned char hasDetectUtterances : 1; unsigned char hasCensorSpeech : 1; unsigned char hasFarField : 1; unsigned char hasSecureOfflineOnly : 1; unsigned char hasShouldStoreAudioOnDevice : 1; unsigned char hasContinuousListening : 1; unsigned char hasShouldHandleCapitalization : 1; unsigned char hasIsSpeechAPIRequest : 1; unsigned char hasMaximumRecognitionDuration : 1; unsigned char hasEndpointStart : 1; unsigned char hasInputOrigin : 1; unsigned char hasLocation : 1; unsigned char hasJitGrammar : 1; unsigned char hasDeliverEagerPackage : 1; unsigned char hasDisableDeliveringAsrFeatures : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCodec:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setApplicationName:(id)a0;
- (void)setInputOrigin:(id)a0;
- (void)setLanguage:(id)a0;
- (void)setOverrides:(id)a0;
- (void)setTask:(id)a0;
- (void)setSecureOfflineOnly:(BOOL)a0;
- (void)setDetectUtterances:(BOOL)a0;
- (void)setContinuousListening:(BOOL)a0;
- (void)setShouldHandleCapitalization:(BOOL)a0;
- (void)setMaximumRecognitionDuration:(double)a0;
- (void)setFarField:(BOOL)a0;
- (void)setOriginalAudioFileURL:(id)a0;
- (void)setRequestIdentifier:(id)a0;
- (void)setModelOverrideURL:(id)a0;
- (void)setProfile:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setLoggingContext:(id)a0;
- (void)setNarrowband:(BOOL)a0;
- (void)setJitGrammar:(id)a0;
- (void)setShouldStoreAudioOnDevice:(BOOL)a0;
- (void)setCensorSpeech:(BOOL)a0;
- (void)setLocation:(id)a0;
- (void)setEndpointStart:(double)a0;
- (void)setDictationUIInteractionIdentifier:(id)a0;
- (void)setIsSpeechAPIRequest:(BOOL)a0;
- (void)setDeliverEagerPackage:(BOOL)a0;
- (void)setDisableDeliveringAsrFeatures:(BOOL)a0;

@end
