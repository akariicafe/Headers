@class NSData, NSDictionary;

@interface WPAdvertisingRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char clientType;
@property long long priorityValue;
@property (retain, nonatomic) NSData *advertisingData;
@property long long advertisingRate;
@property double updateTime;
@property BOOL connectable;
@property (retain) NSDictionary *advertisingOptions;
@property BOOL isRanging;
@property BOOL stopOnAdvertisingAddressChange;
@property BOOL holdVoucher;

+ (id)requestForClientType:(unsigned char)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)changePriorityValue:(long long)a0;

@end
