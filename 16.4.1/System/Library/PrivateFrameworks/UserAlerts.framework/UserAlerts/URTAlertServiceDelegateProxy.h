@class URTAlertService, NSString;

@interface URTAlertServiceDelegateProxy : NSObject <URTAlertClientToServerInterface>

@property (readonly, weak, nonatomic) URTAlertService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
