@class NSString, NSArray, SVXDeviceSetupFlowSiriCapabilitiesHint, SVXDeviceSetupFlowScene;

@interface _SVXDeviceSetupFlowSceneMutation : NSObject <SVXDeviceSetupFlowSceneMutating> {
    SVXDeviceSetupFlowScene *_baseModel;
    long long _sceneID;
    NSString *_speakableText;
    NSArray *_displayKeyFrames;
    SVXDeviceSetupFlowSiriCapabilitiesHint *_siriCapabilitiesHint;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSceneID : 1; unsigned char hasSpeakableText : 1; unsigned char hasDisplayKeyFrames : 1; unsigned char hasSiriCapabilitiesHint : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSceneID:(long long)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (void)setSpeakableText:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setDisplayKeyFrames:(id)a0;
- (void)setSiriCapabilitiesHint:(id)a0;

@end
