@class NSString;

@interface WFPrivateAddressConfig : NSObject <NSCopying>

@property (nonatomic) unsigned long long disabledReason;
@property (nonatomic, getter=isCarrierBundleBased) BOOL carrierBundleBased;
@property (copy, nonatomic) NSString *ssid;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPrivateAddressConfigDictionary:(id)a0 ssid:(id)a1;
- (unsigned long long)hash;

@end
