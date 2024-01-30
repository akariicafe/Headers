@class SiriLongPressButtonContext, NSMutableArray, NSString;

@interface SiriLongPressButtonSource : SiriActivationSource <SiriButtonSource>

@property (nonatomic) double longPressInterval;
@property (nonatomic) long long buttonIdentifier;
@property (retain, nonatomic) NSMutableArray *lock_activityAssertions;
@property (retain, nonatomic) SiriLongPressButtonContext *context;
@property (copy, nonatomic) id /* block */ currentTimeGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)longPressButtonForIdentifier:(long long)a0;

- (id)_deviceIdentifier;
- (id)init;
- (BOOL)_shouldReplaceSpeechInteractionActivityTimestampWithPrewarmTimestamp;
- (void).cxx_destruct;
- (double)_timestampForSpeechInteractionActivityWithTimestamp:(double)a0;
- (id)prepareForActivationWithTimestamp:(double)a0;
- (id)prepareForActivation;
- (void)configureConnection;
- (id)_initWithButtonIdentifier:(long long)a0;
- (id)speechInteractionActivityWithTimestamp:(double)a0;
- (void)didRecognizeLongPress;
- (void)didRecognizeButtonSinglePressUp;

@end
