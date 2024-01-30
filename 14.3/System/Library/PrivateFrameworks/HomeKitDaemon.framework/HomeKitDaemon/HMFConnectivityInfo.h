@class NSString, HMFWoWLANInfo, HMFWoBLEInfo;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMFWoBLEInfo *woBLEInfo;
@property (retain, nonatomic) HMFWoWLANInfo *woWLANInfo;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

+ (id)shortDescription;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccessory:(id)a0 woBLEInfo:(id)a1;
- (id)initWithAccessory:(id)a0 woWLANInfo:(id)a1;
- (void)updateWithWoWLANInfo:(id)a0;
- (void)updateWithWoBLEInfo:(id)a0;

@end
