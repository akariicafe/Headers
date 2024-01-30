@class NSURL, RadiosPreferences;
@protocol ASKAirplaneModeInquiryDelegate;

@interface ASKAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate>

@property (class, readonly) NSURL *settingsURL;

@property (readonly, nonatomic) RadiosPreferences *radiosPreferences;
@property (weak, nonatomic) id<ASKAirplaneModeInquiryDelegate> delegate;
@property (readonly, nonatomic) BOOL isEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)airplaneModeChanged;

@end
