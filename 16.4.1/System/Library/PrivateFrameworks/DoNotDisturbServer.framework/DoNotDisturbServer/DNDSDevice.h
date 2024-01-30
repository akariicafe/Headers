@class NSString;

@interface DNDSDevice : DNDDevice

@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)currentDevice;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1 identifier:(id)a2 frameworkVersion:(struct { long long x0; long long x1; long long x2; })a3;

@end
