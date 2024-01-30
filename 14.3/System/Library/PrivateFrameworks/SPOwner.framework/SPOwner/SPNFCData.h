@class NSString;

@interface SPNFCData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *appleId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *vendorId;
@property (copy, nonatomic) NSString *advertisement;
@property (copy, nonatomic) NSString *advertisementBase;
@property (nonatomic) long long currentAdvertisementBucket;
@property (nonatomic) long long batteryLevel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
