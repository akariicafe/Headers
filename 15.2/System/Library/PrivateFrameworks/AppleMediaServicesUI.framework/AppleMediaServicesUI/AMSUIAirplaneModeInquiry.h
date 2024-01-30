@class NSURL, RadiosPreferences;
@protocol AMSUIAirplaneModeInquiryDelegate;

@interface AMSUIAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate>

@property (class, readonly) NSURL *settingsURL;

@property (readonly, nonatomic) RadiosPreferences *radiosPreferences;
@property (weak, nonatomic) id<AMSUIAirplaneModeInquiryDelegate> delegate;
@property (readonly, nonatomic) BOOL isEnabled;

- (void).cxx_destruct;
- (id)init;
- (void)airplaneModeChanged;

@end
