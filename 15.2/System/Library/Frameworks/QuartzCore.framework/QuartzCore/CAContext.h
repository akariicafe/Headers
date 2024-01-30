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

+ (id)localContext;
+ (id)currentContext;
+ (id)remoteContext;
+ (id)localContextWithOptions:(id)a0;
+ (void)setClientPort:(unsigned int)a0;
+ (id)allContexts;
+ (id)objectForSlot:(unsigned int)a0;
+ (id)remoteContextWithOptions:(id)a0;

- (void *)renderContext;
- (unsigned int)createSlot;
- (BOOL)addFence:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestClientGlitch:(double)a0;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(BOOL)a1;
- (unsigned int)hitTestContext:(struct CGPoint { double x0; double x1; })a0;
- (void)setObject:(id)a0 forSlot:(unsigned int)a1;
- (void)invalidateFences;
- (void)transferSlot:(unsigned int)a0 toContextWithId:(unsigned int)a1;
- (id)initWithOptions:(id)a0 localContext:(BOOL)a1;
- (void)setFencePort:(unsigned int)a0;
- (void *)retainRenderContext;
- (void)deleteSlot:(unsigned int)a0;
- (void)setFence:(unsigned int)a0 count:(unsigned int)a1;
- (BOOL)addFence:(id)a0;
- (void)orderBelow:(unsigned int)a0;
- (id)initRemoteWithOptions:(id)a0;
- (unsigned int)createImageSlot:(struct CGSize { double x0; double x1; })a0 hasAlpha:(BOOL)a1 extendedColors:(BOOL)a2;
- (void *)contextImpl;
- (unsigned int)createFencePort;
- (void)invalidate;
- (void)requestServerGlitch:(double)a0;
- (BOOL)waitForRenderingWithTimeout:(double)a0;
- (void)orderAbove:(unsigned int)a0;
- (void)dealloc;
- (id)debugDescription;
- (void)setFencePort:(unsigned int)a0 commitHandler:(id /* block */)a1;

@end
