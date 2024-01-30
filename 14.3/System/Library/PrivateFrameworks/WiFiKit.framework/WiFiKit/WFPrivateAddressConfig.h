@class NSString;

@interface WFPrivateAddressConfig : NSObject <NSCopying>

@property (nonatomic) unsigned long long disabledReason;
@property (nonatomic, getter=isCarrierBundleBased) BOOL carrierBundleBased;
@property (copy, nonatomic) NSString *ssid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPrivateAddressConfigDictionary:(id)a0 ssid:(id)a1;

@end
