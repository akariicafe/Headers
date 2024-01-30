@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long chipID;
@property (nonatomic) long long pairingVersion;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) BOOL postFailsafeObliteration;
@property (nonatomic) BOOL isCellularEnabled;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
