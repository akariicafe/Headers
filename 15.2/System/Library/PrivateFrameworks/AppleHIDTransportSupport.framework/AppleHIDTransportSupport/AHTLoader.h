@class NSString;

@interface AHTLoader : NSObject

@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int connect;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int imageTag;
@property (readonly, nonatomic) unsigned int loadOrder;

+ (id)allDevices;
+ (id)withService:(unsigned int)a0;
+ (BOOL)errorFromKernel:(int)a0 error:(id *)a1;
+ (id)withName:(id)a0;

- (id)initWithService:(unsigned int)a0;
- (void)close;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)open:(id *)a0;
- (BOOL)loadImage:(id)a0 payloadOnly:(BOOL)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
