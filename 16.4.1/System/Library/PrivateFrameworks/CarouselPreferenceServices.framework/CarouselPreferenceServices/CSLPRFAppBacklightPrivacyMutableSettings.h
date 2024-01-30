@class NSString;

@interface CSLPRFAppBacklightPrivacyMutableSettings : NSObject <CSLPRFAppBacklightPrivacyMutableProperties>

@property (nonatomic) BOOL privacyDuringAlwaysOnForApp;
@property (nonatomic) BOOL privacyDuringAlwaysOnForNotification;
@property (readonly, nonatomic) BOOL watchAppSupportsAlwaysOnDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSettings:(id)a0;
- (BOOL)isEqualToSettings:(id)a0;

@end
