@class ATXCoreDuetContextHelper, ATXNowPlayingEvent;

@interface ATXNowPlayingDataProvider : NSObject {
    ATXCoreDuetContextHelper *_coreDuetContextHelper;
    ATXNowPlayingEvent *_lastNowPlayingEvent;
}

- (id)currentNowPlayingEvent;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isTVExperienceAppNowPlaying;

@end
