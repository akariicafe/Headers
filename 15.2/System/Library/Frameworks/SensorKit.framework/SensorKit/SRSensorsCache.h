@class NSCache, NSArray;

@interface SRSensorsCache : NSObject {
    NSCache *_sensorsCache;
    NSArray *_sensorDescriptionsDirs;
}

@property (class, retain, nonatomic) SRSensorsCache *defaultCache;

- (id)initWithDirectories:(id)a0;
- (id)init;
- (void)dealloc;

@end
