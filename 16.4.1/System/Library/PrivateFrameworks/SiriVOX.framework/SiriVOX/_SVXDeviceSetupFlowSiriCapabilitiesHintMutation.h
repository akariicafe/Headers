@class NSString, SVXDeviceSetupFlowSiriCapabilitiesHint;

@interface _SVXDeviceSetupFlowSiriCapabilitiesHintMutation : NSObject <SVXDeviceSetupFlowSiriCapabilitiesHintMutating> {
    SVXDeviceSetupFlowSiriCapabilitiesHint *_baseModel;
    long long _style;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasStyle : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (void)setStyle:(long long)a0;
- (id)initWithBaseModel:(id)a0;

@end
