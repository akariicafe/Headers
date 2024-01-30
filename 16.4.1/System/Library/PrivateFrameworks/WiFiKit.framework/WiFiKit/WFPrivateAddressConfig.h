@class NSString;

@interface WFPrivateAddressConfig : NSObject <NSCopying>

@property (nonatomic) unsigned long long disabledReason;
@property (nonatomic, getter=isCarrierBundleBased) BOOL carrierBundleBased;
@property (copy, nonatomic) NSString *ssid;

- (id)initWithPrivateAddressConfigDictionary:(id)a0 ssid:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
