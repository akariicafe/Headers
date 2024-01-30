@class WLKAppSettings;

@interface WLKAppSettingsFacade : NSObject {
    WLKAppSettings *_settings;
}

- (id)initWithSettings:(id)a0;
- (id)settings;
- (id)accessStatus;
- (void).cxx_destruct;
- (void)setAccessStatus:(id)a0;

@end
