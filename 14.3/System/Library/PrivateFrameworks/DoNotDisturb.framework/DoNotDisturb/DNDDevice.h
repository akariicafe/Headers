@interface DNDDevice : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long deviceClass;
@property (readonly, nonatomic) unsigned long long deviceCapabilities;

+ (id)currentDevice;
+ (id)deviceWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1;

@end
