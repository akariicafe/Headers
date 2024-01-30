@class NSObject;
@protocol OS_os_log;

@interface CNSharingProfileLogger : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)log;

- (void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)a0;
- (void)logOnboardingAddingContact;
- (void)logOnboardingSuccessSavingMeCardImageToRecents;
- (void)logOnboardingReturningDefaultMonogram;
- (void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)a0;
- (void)logOnboardingSavingContact:(id)a0;
- (void)logOnboardingUpdatingContactWithIdentifier:(id)a0;
- (void)logOnboardingReturningNonAnimojiItem;
- (void)logOnboardingErrorSavingContactWithDescription:(id)a0;
- (void)logOnboardingSettingMeContact;
- (void)logOnboardingErrorSettingMeContactWithDescription:(id)a0;
- (void)logOnboardingSuccessSavingContact;
- (void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)a0;
- (void)logOnboardingReturningSharingResultWithDescription:(id)a0;
- (void)logOnboardingReturningEmptyImage;
- (void)logSettingsSavingContact:(id)a0;
- (void)logSettingsErrorSavingContactWithDescription:(id)a0;
- (void).cxx_destruct;
- (void)logSettingsSettingMeContact;
- (void)logSettingsErrorSettingMeContactWithDescription:(id)a0;
- (void)logSettingsSuccessSavingContact;
- (void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)a0;
- (void)logSettingsReturningSharingResultWithDescription:(id)a0;
- (void)logSettingsReturningDefaultMonogram;
- (void)logSettingsReturningEmptyImageForNoChange;
- (void)logSettingsReturningEmptyImage;
- (id)init;

@end
