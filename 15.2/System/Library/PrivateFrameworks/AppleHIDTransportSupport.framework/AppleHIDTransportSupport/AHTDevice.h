@interface AHTDevice : AHTCommon

+ (id)allDevices;
+ (id)withService:(unsigned int)a0;
+ (id)withName:(id)a0;
+ (id)deviceWithParentRegistryId:(unsigned long long)a0;

- (id)initWithService:(unsigned int)a0;
- (id)description;
- (BOOL)reset;
- (BOOL)setPower:(long long)a0;
- (id)getBootLoader;
- (BOOL)getPower:(long long *)a0;
- (id)getInterfaces;
- (id)getInterface:(unsigned char)a0;
- (id)getInterfaceWithName:(id)a0;
- (id)reporterResults;

@end
