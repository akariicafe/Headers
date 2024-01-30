@class NSString, NSNumber;

@interface CTMobileEquipmentInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long slotId;
@property (retain, nonatomic) NSString *currentMobileId;
@property (retain, nonatomic) NSString *currentSubscriberId;
@property (retain, nonatomic) NSString *IMEI;
@property (retain, nonatomic) NSString *ICCID;
@property (retain, nonatomic) NSString *IMSI;
@property (retain, nonatomic) NSString *cdmaIMSI;
@property (retain, nonatomic) NSString *MEID;
@property (retain, nonatomic) NSString *EUIMID;
@property (retain, nonatomic) NSNumber *PRLVersion;
@property (retain, nonatomic) NSNumber *ERIVersion;
@property (retain, nonatomic) NSString *MIN;
@property (retain, nonatomic) NSString *NAI;
@property (retain, nonatomic) NSString *baseVersion;
@property (retain, nonatomic) NSString *baseId;
@property (retain, nonatomic) NSString *baseProfile;
@property (retain, nonatomic) NSString *effectiveICCID;
@property (retain, nonatomic) NSString *CSN;
@property (retain, nonatomic) NSString *displayCSN;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
