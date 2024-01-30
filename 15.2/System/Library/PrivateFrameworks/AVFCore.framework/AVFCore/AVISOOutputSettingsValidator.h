@interface AVISOOutputSettingsValidator : AVMediaFileOutputSettingsValidator

- (BOOL)validateVideoOutputSettings:(id)a0 reason:(id *)a1;
- (BOOL)validateAudioOutputSettings:(id)a0 reason:(id *)a1;

@end
