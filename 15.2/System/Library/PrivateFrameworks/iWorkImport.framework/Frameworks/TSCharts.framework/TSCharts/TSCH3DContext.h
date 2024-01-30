@class NSSet;

@interface TSCH3DContext : NSObject <NSCopying> {
    struct FramebufferAttributes { int type; long long samples; int colorDataType; int colorFormat; int depthDataType; BOOL linearFilter; BOOL discardHint; BOOL useIOSurfaceBacking; } _currentFramebufferAttributes;
}

@property (readonly, nonatomic) NSSet *childrenContexts;

- (id)sharedContext;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (const struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; BOOL x5; BOOL x6; BOOL x7; } *)currentFramebufferAttributes;
- (void)setCurrentFramebufferAttributes:(const struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; BOOL x5; BOOL x6; BOOL x7; } *)a0;

@end
