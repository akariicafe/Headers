@class NSString;

@interface HFNotSupportedReadPolicy : NSObject <HFCharacteristicReadPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)evaluateWithCharacteristic:(id)a0 traits:(out id *)a1;
- (BOOL)_requiresNotificationsForCharacteristic:(id)a0;

@end
