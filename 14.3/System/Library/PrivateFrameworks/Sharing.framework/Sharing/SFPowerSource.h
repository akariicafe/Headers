@class NSString, NSDictionary, NSData, NSArray;

@interface SFPowerSource : NSObject <NSSecureCoding> {
    struct OpaqueIOPSPowerSourceID { } *_psID;
    int _lowPowerMonitoringToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *ioKitAdapterDescription;
@property (copy, nonatomic) NSDictionary *ioKitDescription;
@property (nonatomic) BOOL added;
@property (nonatomic) BOOL present;
@property (nonatomic) unsigned int changes;
@property (copy, nonatomic) NSString *accessoryCategory;
@property (copy, nonatomic) NSString *accessoryID;
@property (copy, nonatomic) NSData *batteryCaseAddress;
@property (nonatomic) BOOL charging;
@property (nonatomic) double chargeLevel;
@property (nonatomic) long long color;
@property (nonatomic) long long familyCode;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *LEDs;
@property (readonly, nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (nonatomic) double lowWarnLevel;
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (nonatomic) double maxCapacity;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *partID;
@property (copy, nonatomic) NSString *partName;
@property (nonatomic) int powerState;
@property (nonatomic) long long productID;
@property (nonatomic) int role;
@property (nonatomic) BOOL showChargingUI;
@property (nonatomic) long long sourceID;
@property (copy, nonatomic) NSString *state;
@property (nonatomic) long long temperature;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long vendorID;
@property (readonly, nonatomic) BOOL wirelessCharging;
@property (nonatomic) long long adapterErrorFlags;
@property (nonatomic) long long adapterFamilyCode;
@property (copy, nonatomic) NSString *adapterName;
@property (nonatomic) BOOL adapterSharedSource;
@property (nonatomic) long long adapterSourceID;
@property (readonly, nonatomic) long long matID;

- (int)publish;
- (id)detailedDescription;
- (void)_updateWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startLowPowerMonitoringIfAppropriate;
- (unsigned long long)hash;
- (unsigned int)updateWithPowerAdapterDetails:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned int)updateWithPowerSourceDescription:(id)a0;
- (void)updateWithPowerSource:(id)a0;
- (void)lowPowerModeChanged:(int)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
