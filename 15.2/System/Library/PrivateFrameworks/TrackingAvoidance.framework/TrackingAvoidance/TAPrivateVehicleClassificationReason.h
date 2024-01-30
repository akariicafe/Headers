@interface TAPrivateVehicleClassificationReason : NSObject

@property (readonly, nonatomic) unsigned long long reason;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithReason:(unsigned long long)a0;

@end
