@class NSString, NCNotificationRequest;
@protocol NCNotificationRequestInlineActionsProviderDelegate;

@interface NCNotificationRequestInlineActionsProvider : NSObject <NCAuxiliaryOptionsProviding>

@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (weak, nonatomic) id<NCNotificationRequestInlineActionsProviderDelegate> delegate;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property (readonly, copy, nonatomic) NSString *optionsSummaryText;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_primaryAction;
- (id)initWithNotificationRequest:(id)a0 delegate:(id)a1;
- (void)configureOptionButtons:(id)a0;
- (void)handlePrimaryAction:(id)a0;
- (id)_secondaryAction;
- (void)handleSecondaryAction:(id)a0;

@end
