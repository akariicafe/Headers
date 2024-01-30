@class NSMapTable;

@interface PUAirPlayScreenMap : NSObject {
    NSMapTable *_screens;
}

- (void)addDetectedAirPlayScreen:(id)a0;
- (id)airPlayScreenForScreen:(id)a0;
- (unsigned long long)airPlayScreensCount;
- (id)allAirPlayScreens;
- (void).cxx_destruct;
- (id)init;
- (void)removeAirPlayScreen:(id)a0;

@end
