@class PUAirPlayScreenMap, NSArray;
@protocol PUAirPlayScreenReceiver;

@interface PUAirPlayScreenDetector : NSObject

@property (retain, nonatomic, setter=_setDetectedScreensMap:) PUAirPlayScreenMap *_detectedScreensMap;
@property (weak, nonatomic) id<PUAirPlayScreenReceiver> receiver;
@property (readonly, nonatomic) NSArray *availableScreens;

- (id)init;
- (void).cxx_destruct;
- (void)_detectedNewScreen:(id)a0;
- (BOOL)shouldIgnoreScreen:(id)a0;
- (void)_scanForAvailableScreensIfNeeded;
- (void)_lostScreen:(id)a0;
- (void)_setUpScreenNotifications;

@end
