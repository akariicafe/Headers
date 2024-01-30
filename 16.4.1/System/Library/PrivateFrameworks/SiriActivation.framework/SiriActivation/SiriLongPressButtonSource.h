@class SiriLongPressButtonConfiguration, SiriLongPressButtonConfigurationUpdateManager, NSString, SiriLongPressButtonContext, NSMutableArray;
@protocol SiriLongPressButtonSourceDelegate;

@interface SiriLongPressButtonSource : SiriActivationSource <SiriLongPressButtonConfigurationUpdateDelegate, SiriButtonSource>

@property (nonatomic) long long buttonIdentifier;
@property (retain, nonatomic) NSMutableArray *lock_activityAssertions;
@property (retain, nonatomic) SiriLongPressButtonContext *context;
@property (copy, nonatomic) id /* block */ currentTimeGenerator;
@property (copy, nonatomic) SiriLongPressButtonConfiguration *configuration;
@property (retain, nonatomic) SiriLongPressButtonConfigurationUpdateManager *updateManager;
@property (weak, nonatomic) id<SiriLongPressButtonSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)longPressButtonForIdentifier:(long long)a0;

- (void)requestConfigurationUpdatesBasedOnDeviceSettings;
- (void)didRecognizeButtonSinglePressUp;
- (BOOL)_shouldReplaceSpeechInteractionActivityTimestampWithPrewarmTimestamp;
- (id)_initWithButtonIdentifier:(long long)a0;
- (void)configurationUpdateManager:(id)a0 configurationDidUpdateForLongPressSource:(id)a1;
- (void)didRecognizeLongPress;
- (id)speechInteractionActivityWithTimestamp:(double)a0;
- (void)stopConfigurationUpdates;
- (BOOL)_sourceSupportsAutomaticConfigurationUpdates;
- (void)configureConnection;
- (id)prepareForActivationWithTimestamp:(double)a0;
- (double)longPressInterval;
- (id)prepareForActivation;
- (long long)longPressBehavior;
- (id)_deviceIdentifier;
- (double)_timestampForSpeechInteractionActivityWithTimestamp:(double)a0;
- (id)init;
- (void).cxx_destruct;

@end
