@class NSString, NCNotificationRequest;
@protocol NCNotificationManagementContentProviderDelegate;

@interface NCNotificationManagementContentProvider : NSObject <NCAuxiliaryOptionsProviding>

@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (weak, nonatomic) id<NCNotificationManagementContentProviderDelegate> managementDelegate;
@property (readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property (readonly, copy, nonatomic) NSString *optionsSummaryText;
@property (readonly, nonatomic) unsigned long long numberOfOptionButtons;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureOptionButtons:(id)a0;
- (id)initWithNotificationRequest:(id)a0 managementDelegate:(id)a1;
- (void)handleManageAction:(id)a0;

@end
