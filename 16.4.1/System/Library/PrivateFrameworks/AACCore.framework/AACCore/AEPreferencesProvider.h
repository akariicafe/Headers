@class AEOSGestalt;

@interface AEPreferencesProvider : NSObject {
    AEOSGestalt *_OSGestalt;
}

- (id)init;
- (void).cxx_destruct;
- (id)makePreferences;

@end
