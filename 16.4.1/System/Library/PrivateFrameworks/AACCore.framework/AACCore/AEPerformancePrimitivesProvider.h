@class AEOSGestalt;

@interface AEPerformancePrimitivesProvider : NSObject {
    AEOSGestalt *_OSGestalt;
}

- (id)init;
- (void).cxx_destruct;
- (id)makePrimitives;

@end
