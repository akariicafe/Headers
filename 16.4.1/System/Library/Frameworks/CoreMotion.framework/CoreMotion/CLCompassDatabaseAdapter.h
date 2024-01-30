@class NSString;

@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (id)getSilo;
+ (BOOL)isSupported;
+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;

- (void)doAsync:(id /* block */)a0;
- (void)doAsync:(id /* block */)a0 withReply:(id /* block */)a1;
- (void *)adaptee;
- (void)endService;
- (BOOL)syncgetLookupBiasWithMagneticField:(struct { float x0; float x1; float x2; })a0 acceleration:(struct { float x0; float x1; float x2; })a1 bias:(struct { float x0; float x1; float x2; } *)a2 level:(int *)a3 noResults:(BOOL *)a4;
- (void)beginService;
- (int)syncgetPendingSetBiasCount;
- (void)getBiasWithMagneticField:(struct { float x0; float x1; float x2; })a0 acceleration:(struct { float x0; float x1; float x2; })a1;
- (void)setBias:(struct { float x0; float x1; float x2; })a0 withMagneticField:(struct { float x0; float x1; float x2; })a1 level:(int)a2 magnitude:(float)a3 inclination:(float)a4;
- (id)init;
- (void)dumpDatabase:(id)a0 onCompletion:(id /* block */)a1;
- (BOOL)syncgetDoSync:(id /* block */)a0;

@end
