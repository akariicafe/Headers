@interface AFKMemoryDescriptorManager : NSObject {
    unsigned int _service;
}

@property (readonly, nonatomic) unsigned long long regID;
@property (readonly, nonatomic) unsigned int connect;

+ (id)withService:(unsigned int)a0;

- (id)initWithService:(unsigned int)a0;
- (void)dealloc;

@end
