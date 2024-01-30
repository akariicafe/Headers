@class NSString;

@interface HAPMetadataTuple : HMFObject

@property (readonly, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *index;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCharacteristicType:(id)a0 serviceType:(id)a1;
- (unsigned long long)hash;

@end
