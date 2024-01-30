@interface BCLogger : NSObject

+ (void)logEventWithName:(id)a0 businessURI:(id)a1 callToActionText:(id)a2 bizItemReturnedAfterAction:(BOOL)a3 latency:(long long)a4;
+ (void)logEventWithName:(id)a0 version:(long long)a1 status:(id)a2;

- (void)mt_log_icloud_messages_apps_businessframework:(id)a0 version:(long long)a1;

@end
