@class NSObject;
@protocol OS_os_log;

@interface CNSharingProfileLogger : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)logOnboardingSuccessSavingMeCardImageToRecents;
- (void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)a0;
- (void)logOnboardingSavingContact:(id)a0;
- (void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)a0;
- (void)logOnboardingAddingContact;
- (void)logOnboardingUpdatingContactWithIdentifier:(id)a0;
- (void)logOnboardingErrorSavingContactWithDescription:(id)a0;
- (void)logOnboardingSettingMeContact;
- (void)logOnboardingErrorSettingMeContactWithDescription:(id)a0;
- (void)logOnboardingSuccessSavingContact;
- (void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)a0;
- (void)logOnboardingReturningSharingResultWithDescription:(id)a0;
- (void)logOnboardingReturningEmptyImage;
- (void)logOnboardingReturningDefaultMonogram;
- (void)logSettingsSavingContact:(id)a0;
- (void)logSettingsErrorSavingContactWithDescription:(id)a0;
- (void)logSettingsSettingMeContact;
- (void)logSettingsErrorSettingMeContactWithDescription:(id)a0;
- (void)logSettingsSuccessSavingContact;
- (void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)a0;
- (void)logSettingsReturningSharingResultWithDescription:(id)a0;
- (void)logSettingsReturningEmptyImage;
- (void)logSettingsReturningDefaultMonogram;
- (void)logSettingsReturningEmptyImageForNoChange;

@end
