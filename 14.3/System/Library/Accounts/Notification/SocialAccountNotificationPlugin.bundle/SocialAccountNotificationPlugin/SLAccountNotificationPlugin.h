@class NSString;

@interface SLAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    int _accountState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
