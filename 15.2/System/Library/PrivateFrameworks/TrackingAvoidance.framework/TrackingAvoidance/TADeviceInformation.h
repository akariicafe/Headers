@class NSDate, NSString, TASPAdvertisement;

@interface TADeviceInformation : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TASPAdvertisement *advertisement;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) unsigned long long notificationState;
@property (readonly, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceTypeToString:(unsigned long long)a0;
+ (id)notificationStateToString:(unsigned long long)a0;

- (id)descriptionDictionary;
- (id)getDate;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTASPAdvertisement:(id)a0 deviceType:(unsigned long long)a1 notificationState:(unsigned long long)a2 date:(id)a3;

@end
