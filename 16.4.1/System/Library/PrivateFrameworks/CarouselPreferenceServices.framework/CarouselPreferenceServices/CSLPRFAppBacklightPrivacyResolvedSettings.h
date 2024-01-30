@class NSString;
@protocol CSLPRFAppBacklightPrivacyProperties;

@interface CSLPRFAppBacklightPrivacyResolvedSettings : NSObject <CSLPRFAppBacklightPrivacyProperties> {
    id<CSLPRFAppBacklightPrivacyProperties> _settings;
    id<CSLPRFAppBacklightPrivacyProperties> _globalSettings;
}

@property (readonly, nonatomic) BOOL watchAppSupportsAlwaysOnDisplay;
@property (readonly, nonatomic) BOOL privacyDuringAlwaysOnForApp;
@property (readonly, nonatomic) BOOL privacyDuringAlwaysOnForNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0 globalSettings:(id)a1;
- (BOOL)isEqualToSettings:(id)a0;

@end
