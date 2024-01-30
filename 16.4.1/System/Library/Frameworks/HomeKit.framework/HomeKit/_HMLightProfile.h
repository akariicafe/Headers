@class HMLightProfileSettings, HMLightProfile;

@interface _HMLightProfile : _HMAccessoryProfile

@property (readonly) HMLightProfile *lightProfile;
@property (retain) HMLightProfileSettings *settings;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 services:(id)a1 settings:(id)a2;
- (void)_registerNotificationHandlers;
- (void)handleSettingsDidUpdate:(id)a0;

@end
