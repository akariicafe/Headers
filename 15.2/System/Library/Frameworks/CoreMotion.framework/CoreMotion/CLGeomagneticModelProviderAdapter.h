@class NSString;

@interface CLGeomagneticModelProviderAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderProtocol>

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (BOOL)isSupported;
+ (id)getSilo;

- (void *)adaptee;
- (void)doAsync:(id /* block */)a0;
- (BOOL)syncgetDoSync:(id /* block */)a0;
- (void)doAsync:(id /* block */)a0 withReply:(id /* block */)a1;
- (void)endService;
- (void)beginService;
- (id)init;
- (void)fetchGeomagneticModelData:(id /* block */)a0;

@end
