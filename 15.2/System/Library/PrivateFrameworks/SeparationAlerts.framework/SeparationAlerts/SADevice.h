@class NSUUID, NSString, NSDate;

@interface SADevice : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSUUID *groupIdentifier;
@property (readonly, nonatomic) long long partIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) long long vendorId;
@property (readonly, nonatomic) long long productId;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) BOOL notifyEnabled;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionDictionary;
- (id)getDate;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceUUID:(id)a0 groupIdentifier:(id)a1 partIdentifier:(long long)a2 name:(id)a3 model:(id)a4 systemVersion:(id)a5 vendorId:(long long)a6 productId:(long long)a7 deviceType:(unsigned long long)a8 notifyEnabled:(BOOL)a9 date:(id)a10;
- (id)initWithDeviceUUID:(id)a0 groupIdentifier:(id)a1 name:(id)a2 model:(id)a3 systemVersion:(id)a4 vendorId:(long long)a5 productId:(long long)a6 deviceType:(unsigned long long)a7 notifyEnabled:(BOOL)a8 date:(id)a9;
- (id)initWithDeviceUUID:(id)a0 name:(id)a1 model:(id)a2 systemVersion:(id)a3 vendorId:(long long)a4 productId:(long long)a5 deviceType:(unsigned long long)a6 notifyEnabled:(BOOL)a7 date:(id)a8;
- (BOOL)isReallyEqual:(id)a0;

@end
