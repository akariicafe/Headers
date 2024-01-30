@class CALayer, NSDictionary, NSString;

@interface CAContext : NSObject {
    void *_impl;
}

@property (readonly) unsigned int contextId;
@property (retain) CALayer *layer;
@property (copy) NSDictionary *payload;
@property struct CGColorSpace { } *colorSpace;
@property unsigned int commitPriority;
@property BOOL colorMatchUntaggedContent;
@property (copy) NSString *contentsFormat;
@property (copy) NSString *annotation;
@property (readonly) NSDictionary *options;
@property float level;
@property (readonly) unsigned int displayId;
@property (getter=isSecure) BOOL secure;
@property float desiredDynamicRange;
@property (readonly) BOOL valid;
@property (readonly, nonatomic) unsigned int commitId;

+ (id)contextWithId:(unsigned int)a0;
+ (id)remoteContext;
+ (id)allContexts;
+ (id)objectForSlot:(unsigned int)a0;
+ (id)currentContext;
+ (void)setClientPort:(unsigned int)a0;
+ (id)localContext;
+ (id)remoteContextWithOptions:(id)a0;
+ (id)localContextWithOptions:(id)a0;

- (void)requestClientGlitch:(double)a0;
- (void)requestServerGlitch:(double)a0;
- (unsigned int)createSlot;
- (unsigned int)hitTestContext:(struct CGPoint { double x0; double x1; })a0;
- (void)setFence:(unsigned int)a0 count:(unsigned int)a1;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(BOOL)a1 extendedColors:(BOOL)a2;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(BOOL)a1;
- (id)initRemoteWithOptions:(id)a0;
- (BOOL)addFence:(id)a0 completionHandler:(id /* block */)a1;
- (void)setFencePort:(unsigned int)a0;
- (BOOL)waitForCommitId:(unsigned int)a0 timeout:(double)a1;
- (void)orderBelow:(unsigned int)a0;
- (void)deleteSlot:(unsigned int)a0;
- (void)invalidateFences;
- (id)debugDescription;
- (id)initWithOptions:(id)a0 localContext:(BOOL)a1;
- (void)dealloc;
- (void)setFencePort:(unsigned int)a0 commitHandler:(id /* block */)a1;
- (void)transferSlot:(unsigned int)a0 toContextWithId:(unsigned int)a1;
- (void *)renderContext;
- (void *)contextImpl;
- (void *)retainRenderContext;
- (unsigned int)createFencePort;
- (BOOL)addFence:(id)a0;
- (void)invalidate;
- (void)orderAbove:(unsigned int)a0;
- (void)setObject:(id)a0 forSlot:(unsigned int)a1;
- (BOOL)waitForRenderingWithTimeout:(double)a0;

@end
