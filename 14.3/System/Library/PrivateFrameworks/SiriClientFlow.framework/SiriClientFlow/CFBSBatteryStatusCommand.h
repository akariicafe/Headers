@class NSString;

@interface CFBSBatteryStatusCommand : SADomainCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)command;
+ (id)commandWithDictionary:(id)a0 context:(id)a1;
+ (id)aceObjectWithDictionary:(id)a0 context:(id)a1;
+ (void)batteryDeviceControllerWithCompletion:(id /* block */)a0;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (void)handleWithCompletion:(id /* block */)a0;

@end
