@class NSString;

@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connect;
@property (copy, nonatomic) NSString *name;

- (id)initWithService:(unsigned int)a0;
- (BOOL)setPower:(long long)a0;
- (unsigned long long)registryID;
- (BOOL)open;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (BOOL)reset;
- (id)getBootLoader;
- (BOOL)getPower:(long long *)a0;

@end
