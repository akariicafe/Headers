@class NSString, NSObject;
@protocol FxPlugAPIDelegate;

@interface FxPlugAPIHandler : NSObject <FxHostResourcesAPI, PROAPIObject>

@property (nonatomic) NSObject<FxPlugAPIDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)createPBuffer:(unsigned int *)a0 withTarget:(unsigned int)a1 error:(id *)a2;
- (void *)allocateMemory:(unsigned long long)a0 clear:(BOOL)a1 clearWith:(unsigned char)a2 error:(id *)a3;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (void)createTexture:(id *)a0 withDOD:(struct FxRect { int x0; int x1; int x2; int x3; })a1 GLTarget:(unsigned int)a2 level:(int)a3 internalFormat:(unsigned int)a4 width:(int)a5 height:(int)a6 border:(int)a7 format:(unsigned int)a8 type:(unsigned int)a9 pixels:(const void *)a10 origin:(unsigned long long)a11 pixelAspectRatio:(double)a12 andError:(id *)a13;
- (void)deletePBuffer:(unsigned int)a0 error:(id *)a1;
- (void)deleteTexture:(id)a0 error:(id *)a1;
- (id)errorWithString:(id)a0 andCode:(long long)a1;
- (void)freeMemory:(void *)a0 error:(id *)a1;
- (unsigned long long)numberOfCores;
- (void)performSelector:(SEL)a0 onTarget:(id)a1 withObject:(id)a2 onThreads:(long long)a3 waitUntilDone:(BOOL)a4 error:(id *)a5;
- (void)runFxPlugThread:(id)a0;
- (void)trackExternalAllocation:(unsigned long long)a0;

@end
