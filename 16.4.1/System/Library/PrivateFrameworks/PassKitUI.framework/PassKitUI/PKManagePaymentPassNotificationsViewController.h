@class PKPaymentPass, NSString, PKPaymentPassDetailsNotificationSettingsSectionController, PKPaymentDefaultDataProvider;

@interface PKManagePaymentPassNotificationsViewController : PKDynamicTableViewController <PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate> {
    PKPaymentPass *_pass;
    PKPaymentPassDetailsNotificationSettingsSectionController *_notificationsSectionController;
    PKPaymentDefaultDataProvider *_defaultDataProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowForPass:(id)a0 dataProvider:(id)a1 peerPaymentAccount:(id)a2 account:(id)a3;

@end
