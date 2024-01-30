@class NSObject;
@protocol OS_os_log;

@interface CNSharingProfileLogger : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)logSettingsSuccessSavingContact;
- (void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)a0;
- (void)logOnboardingAddingContact;
- (void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)a0;
- (void)logOnboardingErrorSavingContactWithDescription:(id)a0;
- (void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)a0;
- (void)logOnboardingErrorSettingMeContactWithDescription:(id)a0;
- (void)logOnboardingReturningDefaultMonogram;
- (void)logOnboardingReturningEmptyImage;
- (void)logOnboardingReturningNonAnimojiItem;
- (void)logOnboardingReturningSharingResultWithDescription:(id)a0;
- (void)logOnboardingSavingContact:(id)a0;
- (void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)a0;
- (void)logOnboardingSettingMeContact;
- (void)logOnboardingSuccessSavingContact;
- (void)logOnboardingSuccessSavingMeCardImageToRecents;
- (void)logOnboardingUpdatingContactWithIdentifier:(id)a0;
- (void)logSettingsErrorSavingContactWithDescription:(id)a0;
- (void)logSettingsErrorSettingMeContactWithDescription:(id)a0;
- (void)logSettingsReturningDefaultMonogram;
- (void)logSettingsReturningEmptyImage;
- (void)logSettingsReturningEmptyImageForNoChange;
- (void)logSettingsReturningSharingResultWithDescription:(id)a0;
- (void)logSettingsSavingContact:(id)a0;
- (void)logSettingsSettingMeContact;

@end
