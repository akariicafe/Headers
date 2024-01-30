@class AEOSGestalt;

@interface AEFeatureFlagsProvider : NSObject {
    AEOSGestalt *_OSGestalt;
}

- (id)init;
- (void).cxx_destruct;
- (id)makeFeatureFlags;

@end
