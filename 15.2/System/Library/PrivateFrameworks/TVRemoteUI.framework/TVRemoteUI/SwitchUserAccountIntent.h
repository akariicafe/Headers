@class TVRUserAccount, TVRDevice;

@interface SwitchUserAccountIntent : INIntent

@property (copy, nonatomic) TVRDevice *device;
@property (copy, nonatomic) TVRUserAccount *account;

@end
