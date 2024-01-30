@class NSString;

@interface HAPMetadataTuple : HMFObject

@property (readonly, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *index;

- (void).cxx_destruct;
- (id)initWithCharacteristicType:(id)a0 serviceType:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
