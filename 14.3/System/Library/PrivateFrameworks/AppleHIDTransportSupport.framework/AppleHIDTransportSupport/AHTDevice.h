@class NSString;

@interface AHTDevice : NSObject

@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int connect;
@property (readonly, nonatomic) NSString *name;

+ (id)allDevices;
+ (id)withService:(unsigned int)a0;
+ (id)withName:(id)a0;
+ (id)deviceWithParentRegistryId:(unsigned long long)a0;

- (void)close;
- (void).cxx_destruct;
- (BOOL)reset;
- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (unsigned long long)registryID;
- (id)description;
- (BOOL)setPower:(long long)a0;
- (BOOL)open;
- (id)getBootLoader;
- (id)getInterfaces;
- (id)getInterface:(unsigned char)a0;
- (BOOL)getPower:(long long *)a0;
- (id)reporterResults;

@end
