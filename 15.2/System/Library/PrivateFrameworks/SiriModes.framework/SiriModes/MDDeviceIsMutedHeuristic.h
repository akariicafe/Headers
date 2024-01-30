@class MDModeDecision, AFNotifyObserver;

@interface MDDeviceIsMutedHeuristic : NSObject <MDModeHeuristic> {
    AFNotifyObserver *_ringerStateObserver;
    MDModeDecision *_displayOnlyModeDecision;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithRingerStateObserver:(id)a0;
- (BOOL)isDeviceSilentMode;
- (id)determineCurrentMode;

@end
