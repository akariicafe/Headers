@class NSString, AFOutputVoiceColorDescriptor;

@interface _AFOutputVoiceColorDescriptorMutation : NSObject <AFOutputVoiceColorDescriptorMutating> {
    AFOutputVoiceColorDescriptor *_baseModel;
    NSString *_hexColor;
    NSString *_colorName;
    float _alpha;
    NSString *_localizedOutputVoiceColor;
    NSString *_localizedOutputVoice;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasHexColor : 1; unsigned char hasColorName : 1; unsigned char hasAlpha : 1; unsigned char hasLocalizedOutputVoiceColor : 1; unsigned char hasLocalizedOutputVoice : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAlpha:(float)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (void)setColorName:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setHexColor:(id)a0;
- (void)setLocalizedOutputVoice:(id)a0;
- (void)setLocalizedOutputVoiceColor:(id)a0;

@end
