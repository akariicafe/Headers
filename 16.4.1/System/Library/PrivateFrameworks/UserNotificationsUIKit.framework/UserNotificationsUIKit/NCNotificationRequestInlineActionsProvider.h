@class UIColor, NSString, NSArray, NCNotificationRequest;
@protocol NCNotificationRequestInlineActionsProviderDelegate;

@interface NCNotificationRequestInlineActionsProvider : NSObject <NCAuxiliaryOptionsProviding>

@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (weak, nonatomic) id<NCNotificationRequestInlineActionsProviderDelegate> delegate;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly, copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (readonly, copy, nonatomic) NSArray *auxiliaryOptionActions;
@property (readonly, copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
