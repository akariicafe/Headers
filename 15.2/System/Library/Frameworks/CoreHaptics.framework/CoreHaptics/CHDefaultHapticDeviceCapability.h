@interface CHDefaultHapticDeviceCapability : NSObject <CHHapticDeviceCapability> {
    BOOL _supports3rdPartyHaptics;
}

@property (readonly) unsigned long long maximumNumberOfHapticChannels;
@property (readonly) unsigned long long maximumNumberOfAudioChannels;
@property (readonly) BOOL supportsHaptics;
@property (readonly) BOOL supportsAudio;

- (id)initPrivate;
- (id)init;
- (float)minimumValueForEventParameter:(id)a0;
- (float)maximumValueForEventParameter:(id)a0;
- (float)defaultValueForEventParameter:(id)a0 eventType:(id)a1;
- (float)minimumValueForDynamicParameter:(id)a0;
- (float)maximumValueForDynamicParameter:(id)a0;
- (float)defaultValueForDynamicParameter:(id)a0;
- (id)attributesForEventParameter:(id)a0 eventType:(id)a1 error:(id *)a2;
- (id)attributesForDynamicParameter:(id)a0 error:(id *)a1;

@end
