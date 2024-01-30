@class NSDictionary, NSString;

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {
    NSDictionary *_exportSettings;
}

@property (readonly, nonatomic) NSDictionary *baseAudioSettings;
@property (readonly, nonatomic) NSDictionary *baseVideoSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOutputSettingsPreset:(id)a0;
- (id)init;
- (void)dealloc;

@end
