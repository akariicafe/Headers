@class NSString, PKBarcodePassDetailsNotificationSettingsSectionController, PKPaymentPass;

@interface PKManageBarcodePassNotificationsViewController : PKDynamicTableViewController <PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate> {
    PKPaymentPass *_pass;
    PKBarcodePassDetailsNotificationSettingsSectionController *_notificationsSectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowForPass:(id)a0;

- (void).cxx_destruct;
- (id)initWithPass:(id)a0;
- (void)recomputeMappedSectionsAndReloadSections:(id)a0;

@end
