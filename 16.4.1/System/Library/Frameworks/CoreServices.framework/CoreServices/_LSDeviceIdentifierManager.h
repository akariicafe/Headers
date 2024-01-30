@class NSMutableDictionary;

@interface _LSDeviceIdentifierManager : NSObject {
    NSMutableDictionary *_sharedCaches;
}

+ (id)sharedInstance;

- (id)cacheForPersona:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
