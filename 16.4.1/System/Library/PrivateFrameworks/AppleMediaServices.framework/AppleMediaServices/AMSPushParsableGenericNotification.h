@class NSString;

@interface AMSPushParsableGenericNotification : NSObject <AMSPushParsable>

@property (class, readonly, nonatomic) BOOL shouldSkipAccountCheck;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_generateDialogRequestFromPayload:(id)a0 config:(id)a1;
+ (id)_generateNotificationFromPayload:(id)a0 config:(id)a1;
+ (BOOL)_shouldPresentAlertForPayload:(id)a0;
+ (void)handleNotificationPayload:(id)a0 config:(id)a1 bag:(id)a2;


@end
