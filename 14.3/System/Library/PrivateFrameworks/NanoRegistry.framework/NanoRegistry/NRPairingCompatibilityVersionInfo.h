@interface NRPairingCompatibilityVersionInfo : NSObject

@property (nonatomic) long long pairingCompatibilityVersion;
@property (nonatomic) long long maxPairingCompatibilityVersion;
@property (nonatomic) long long minPairingCompatibilityVersion;
@property (nonatomic) long long minPairingCompatibilityVersionWithChipID;
@property (nonatomic) long long minQuickSwitchCompatibilityVersion;
@property (nonatomic) BOOL isOverrideActive;

+ (id)numberFromCFPrefs:(id)a0;
+ (unsigned long long)valueForToken:(int)a0;
+ (id)stringFromCFPrefs:(id)a0;
+ (id)systemVersions;

- (id)initInternal;
- (long long)minPairingCompatibilityVersionForChipID:(id)a0 name:(id)a1 defaultVersion:(long long)a2;
- (long long)minPairingCompatibilityVersionForChipID:(id)a0;
- (long long)minQuickSwitchPairingCompatibilityVersionForChipID:(id)a0;

@end
