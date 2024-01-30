@class MTRSetupPayload, NSUUID, NSString, NSArray, NSNumber, MTSDevicePairingFabric;

@interface MTSDevicePairing : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *uuid;
@property (readonly) NSNumber *nodeID;
@property (readonly, copy) MTSDevicePairingFabric *fabric;
@property (readonly, copy) NSString *serialNumber;
@property (readonly) NSNumber *vendorID;
@property (readonly) NSNumber *productID;
@property (readonly) NSNumber *deviceType;
@property (readonly, copy) NSString *name;
@property (readonly) MTRSetupPayload *setupPayload;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)UUIDFromNodeID:(id)a0 fabric:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNodeID:(id)a0 fabric:(id)a1;
- (id)initWithUUID:(id)a0 nodeID:(id)a1 serialNumber:(id)a2 vendorID:(id)a3 productID:(id)a4 deviceType:(id)a5 name:(id)a6 setupPayload:(id)a7;

@end
