@class NSString, AHTDevice;

@interface AHTBootLoader : NSObject

@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int connect;
@property (nonatomic) unsigned int machPort;
@property (readonly, nonatomic) NSString *personality;
@property (readonly, nonatomic) AHTDevice *device;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) unsigned int imageTag;
@property (readonly, nonatomic) BOOL needsRestoreUpdate;
@property (readonly, nonatomic) BOOL supportsMemoryDump;

+ (id)withService:(unsigned int)a0;
+ (unsigned long long)frameworkToDriverOptions:(unsigned long long)a0;
+ (id)withDevice:(id)a0 service:(unsigned int)a1;

- (void)close;
- (void).cxx_destruct;
- (BOOL)isOpen;
- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (id)description;
- (BOOL)open:(id *)a0;
- (BOOL)getProperty:(id)a0 property:(id *)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithDevice:(id)a0 service:(unsigned int)a1;
- (BOOL)createMachPort:(id *)a0;
- (void)destroyMachPort;
- (id)dispatchSourceForNotification:(id)a0 action:(id /* block */)a1 error:(id *)a2;
- (BOOL)updateProperty:(id)a0 property:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)reloadProperties:(unsigned long long)a0 error:(id *)a1;
- (BOOL)overridePersonality:(id)a0 error:(id *)a1;
- (BOOL)setMemoryDumpLevel:(unsigned int)a0 error:(id *)a1;
- (BOOL)getMemoryDumpLevel:(unsigned int *)a0 error:(id *)a1;
- (BOOL)clearMemoryDumps:(id *)a0;
- (BOOL)getMemoryDumps:(id *)a0 error:(id *)a1;

@end
