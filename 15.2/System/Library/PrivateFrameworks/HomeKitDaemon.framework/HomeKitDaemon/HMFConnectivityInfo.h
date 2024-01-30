@class HMFWoBLEInfo, NSArray, NSString, HMFWoWLANInfo;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMFWoBLEInfo *woBLEInfo;
@property (retain, nonatomic) NSArray *woWLANInfos;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) HMFWoWLANInfo *woWLANInfo;

+ (id)shortDescription;
+ (id)connectivityInfoWithAccessoryIdentifier:(id)a0 wakeConfiguration:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithAccessoryIdentifier:(id)a0 woBLEInfo:(id)a1 woWLANInfos:(id)a2;

@end
