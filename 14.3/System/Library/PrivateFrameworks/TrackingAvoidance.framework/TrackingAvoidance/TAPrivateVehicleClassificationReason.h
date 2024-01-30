@interface TAPrivateVehicleClassificationReason : NSObject

@property (readonly, nonatomic) unsigned long long reason;

- (id)initWithReason:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
