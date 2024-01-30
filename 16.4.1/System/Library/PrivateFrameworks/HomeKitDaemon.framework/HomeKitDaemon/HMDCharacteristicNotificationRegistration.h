@class NSUUID, NSString, NSDate, NSNumber;

@interface HMDCharacteristicNotificationRegistration : HMFObject

@property (readonly) NSUUID *accessoryUUID;
@property (readonly) NSNumber *characteristicInstanceID;
@property (readonly, copy) NSString *deviceIdsDestination;
@property (readonly) NSUUID *userUUID;
@property (readonly) NSDate *lastModified;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithAccessoryUUID:(id)a0 characteristicInstanceID:(id)a1 deviceIdsDestination:(id)a2 userUUID:(id)a3 lastModified:(id)a4;

@end
