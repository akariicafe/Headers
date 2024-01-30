@class NSString, NSCache, NSArray;

@interface SRSensorsCache : NSObject <NSCacheDelegate> {
    NSCache *_sensorsCache;
    NSArray *_sensorDescriptionsDirs;
    BOOL _shouldReloadAllSensors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

@end
