@class NSString, NSArray, SAPerson;

@interface SADPDeviceDetail : SADomainObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL canPlaySound;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *deviceLocality;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *emoji;
@property (nonatomic) BOOL foundNearby;
@property (retain, nonatomic) SAPerson *owner;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSArray *productTypes;
@property (nonatomic) BOOL thisDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceDetail;
+ (id)deviceDetailWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
