@class NSData, NSString, NSDate;

@interface RTPDiscoveryAdvertisement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSData *authTag;
@property (readonly, nonatomic) long long rssi;
@property (readonly, copy, nonatomic) NSDate *scanDate;
@property (readonly, copy, nonatomic) NSString *contactID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 authTag:(id)a1 rssi:(long long)a2 scanDate:(id)a3 contactID:(id)a4;

@end
