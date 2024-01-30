@class AFKMemoryDescriptorManager;

@interface AFKMemoryDescriptor : NSObject {
    unsigned long long _cachedLength;
}

@property (readonly, nonatomic) unsigned long long regID;
@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) AFKMemoryDescriptorManager *manager;
@property (readonly, nonatomic) char *buffer;
@property (readonly, nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long length;

+ (id)withManager:(id)a0 capacity:(unsigned long long)a1;
+ (id)withManager:(id)a0 capacity:(unsigned long long)a1 token:(unsigned long long)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0 capacity:(unsigned long long)a1 token:(unsigned long long)a2;
- (int)releaseControl:(BOOL)a0;
- (int)assertPower:(BOOL)a0;
- (int)assumeControl;
- (void)handleEnqueue;
- (id)initWithManager:(id)a0 capacity:(unsigned long long)a1 buffer:(BOOL)a2;
- (BOOL)mapDescriptor;
- (int)readBytes:(void *)a0 size:(unsigned long long)a1 fromOffset:(unsigned long long)a2;
- (int)writeBytes:(const void *)a0 size:(unsigned long long)a1 toOffset:(unsigned long long)a2;

@end
