@class WLKAppSettings;

@interface WLKAppSettingsFacade : NSObject {
    WLKAppSettings *_settings;
}

- (id)settings;
- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)accessStatus;
- (void)setAccessStatus:(id)a0;

@end
