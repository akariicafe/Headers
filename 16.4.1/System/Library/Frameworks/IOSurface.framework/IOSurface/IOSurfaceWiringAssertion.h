@interface IOSurfaceWiringAssertion : NSObject {
    unsigned int _mach_port;
}

- (id)initWithIOSurfaceClient:(struct __IOSurfaceClient { } *)a0;
- (id)initWithIOSurface:(id)a0;
- (void)dealloc;

@end
