@class NSMapTable;

@interface PUAirPlayScreenMap : NSObject {
    NSMapTable *_screens;
}

- (id)init;
- (unsigned long long)airPlayScreensCount;
- (void).cxx_destruct;
- (id)airPlayScreenForScreen:(id)a0;
- (id)allAirPlayScreens;
- (void)addDetectedAirPlayScreen:(id)a0;
- (void)removeAirPlayScreen:(id)a0;

@end
