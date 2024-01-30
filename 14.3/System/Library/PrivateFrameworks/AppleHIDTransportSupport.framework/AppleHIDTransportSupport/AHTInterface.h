@class NSString;

@interface AHTInterface : NSObject

@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int connect;
@property (readonly, nonatomic) unsigned char interfaceID;
@property (readonly, nonatomic) NSString *name;

+ (id)withService:(unsigned int)a0;

- (void)close;
- (void).cxx_destruct;
- (BOOL)reset;
- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (unsigned long long)registryID;
- (id)description;
- (BOOL)setPower:(long long)a0;
- (BOOL)open;
- (BOOL)setEnable:(BOOL)a0;
- (BOOL)setReport:(unsigned char)a0 withData:(id)a1;
- (BOOL)getReport:(unsigned char)a0 withData:(id)a1;

@end
