@class NSDictionary, NSString;

@interface HFSuspendedStateOverrideValueProvider : NSObject <HFOverrideCharacteristicValueProvider>

@property (class, readonly, nonatomic) NSDictionary *overrideDefaultValueForCharacteristicType;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueSource:(id)a0 overrideValueForCharacteristic:(id)a1;
- (BOOL)valueSource:(id)a0 shouldOverrideValueForCharacteristic:(id)a1;

@end
