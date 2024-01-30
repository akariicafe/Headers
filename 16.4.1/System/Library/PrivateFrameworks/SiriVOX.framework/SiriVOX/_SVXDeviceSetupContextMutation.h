@class SVXDeviceSetupOptions, NSString, SVXDeviceSetupContext, SVXDeviceSetupFlowScene, NSDate;

@interface _SVXDeviceSetupContextMutation : NSObject <SVXDeviceSetupContextMutating> {
    SVXDeviceSetupContext *_baseModel;
    unsigned long long _timestamp;
    SVXDeviceSetupOptions *_options;
    SVXDeviceSetupFlowScene *_flowScene;
    NSDate *_beginDate;
    NSDate *_endDate;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTimestamp : 1; unsigned char hasOptions : 1; unsigned char hasFlowScene : 1; unsigned char hasBeginDate : 1; unsigned char hasEndDate : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEndDate:(id)a0;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setBeginDate:(id)a0;
- (id)generate;
- (id)init;
- (void)setOptions:(id)a0;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setFlowScene:(id)a0;

@end
