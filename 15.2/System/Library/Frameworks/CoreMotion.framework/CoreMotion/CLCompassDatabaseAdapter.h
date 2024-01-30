@class NSString;

@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>

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
- (void)dumpDatabase:(id)a0 onCompletion:(id /* block */)a1;
- (void)doAsync:(id /* block */)a0;
- (BOOL)syncgetDoSync:(id /* block */)a0;
- (void)doAsync:(id /* block */)a0 withReply:(id /* block */)a1;
- (void)setBias:(struct { float x0; float x1; float x2; })a0 withMagneticField:(struct { float x0; float x1; float x2; })a1 level:(int)a2 magnitude:(float)a3 inclination:(float)a4;
- (BOOL)syncgetLookupBiasWithMagneticField:(struct { float x0; float x1; float x2; })a0 acceleration:(struct { float x0; float x1; float x2; })a1 bias:(struct { float x0; float x1; float x2; } *)a2 level:(int *)a3 noResults:(BOOL *)a4;
- (void)endService;
- (void)beginService;
- (id)init;
- (void)getBiasWithMagneticField:(struct { float x0; float x1; float x2; })a0 acceleration:(struct { float x0; float x1; float x2; })a1;
- (int)syncgetPendingSetBiasCount;

@end
