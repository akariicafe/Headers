@class NSNotificationCenter, NSString;
@protocol CNDonationPreferencesLogger;

@interface CNDDonationPreferences : NSObject <CNDDonationPreferences>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<CNDonationPreferencesLogger> logger;
@property (readonly, copy, nonatomic) id /* block */ donationPreferenceCheckingBlock;
@property (readonly, copy, nonatomic) id /* block */ donationPreferenceSettingBlock;
@property (nonatomic, getter=isDonationsEnabled) BOOL donationsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observableWithPreferences:(id)a0 notificationCenter:(id)a1 schedulerProvider:(id)a2;

@end
