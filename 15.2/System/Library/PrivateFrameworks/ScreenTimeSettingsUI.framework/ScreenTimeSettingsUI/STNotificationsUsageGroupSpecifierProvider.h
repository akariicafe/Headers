@class BBSettingsGateway, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface STNotificationsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider

@property (readonly, nonatomic) NSMutableDictionary *notificationSectionByBundleID;
@property (readonly, nonatomic) BBSettingsGateway *notificationSettingsGateway;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationSettingsGatewayQueue;

- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_usageDetailsCoordinator:(id)a0;
- (void)_specifierIdentifierDidChange:(id)a0;
- (void)_selectedUsageReportDidChangeFrom:(id)a0 to:(id)a1;
- (id)newSpecifierWithUsageItem:(id)a0;
- (void)updateSpecifier:(id)a0 usageItem:(id)a1;
- (id)getNotificationsInfo:(id)a0;

@end
