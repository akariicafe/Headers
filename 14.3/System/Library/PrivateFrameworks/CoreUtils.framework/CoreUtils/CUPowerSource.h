@class NSString, NSDictionary, NSArray;

@interface CUPowerSource : NSObject <NSSecureCoding> {
    struct OpaqueIOPSPowerSourceID { } *_psID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *ioKitAdapterDescription;
@property (copy, nonatomic) NSDictionary *ioKitDescription;
@property (nonatomic) BOOL present;
@property (copy, nonatomic) NSString *accessoryCategory;
@property (copy, nonatomic) NSString *accessoryID;
@property (nonatomic) BOOL aggregate;
@property (nonatomic) BOOL charging;
@property (nonatomic) double chargeLevel;
@property (nonatomic) unsigned int expectedComponents;
@property (nonatomic) long long familyCode;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *LEDs;
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
@property (retain, nonatomic) CUPowerSource *subLeft;
@property (retain, nonatomic) CUPowerSource *subRight;
@property (retain, nonatomic) CUPowerSource *subCase;
@property (retain, nonatomic) CUPowerSource *subMain;
@property (nonatomic) long long temperature;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long vendorID;
@property (nonatomic) long long adapterErrorFlags;
@property (nonatomic) long long adapterFamilyCode;
@property (copy, nonatomic) NSString *adapterName;
@property (nonatomic) BOOL adapterSharedSource;
@property (nonatomic) long long adapterSourceID;

- (int)publish;
- (id)detailedDescription;
- (void)_updateWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isAggregateComponent;
- (BOOL)hasAllComponents;
- (void)handleSubComponentsUpdated;
- (void)handleSubComponentsUpdatedWithBaseSource:(id)a0;
- (unsigned long long)hash;
- (unsigned int)updateWithPowerAdapterDetails:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned int)updateWithPowerSourceDescription:(id)a0;
- (void)updateWithPowerSource:(id)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;

@end
