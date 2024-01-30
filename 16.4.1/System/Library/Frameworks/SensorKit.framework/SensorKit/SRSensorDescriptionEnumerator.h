@class SRSensorsCache, NSDirectoryEnumerator;

@interface SRSensorDescriptionEnumerator : NSEnumerator {
    SRSensorsCache *_sensorsCache;
    unsigned long long _currentSensorDirectoryIndex;
    NSDirectoryEnumerator *_descriptionFileEnumerator;
}

- (id)nextObject;
- (void)dealloc;

@end
