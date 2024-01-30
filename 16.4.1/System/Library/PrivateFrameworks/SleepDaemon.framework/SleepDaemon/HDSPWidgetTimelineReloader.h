@class CHSTimelineController;

@interface HDSPWidgetTimelineReloader : NSObject <HDSPWidgetReloader> {
    CHSTimelineController *_timelineController;
}

- (void)reloadSleepWidget;
- (id)init;
- (void).cxx_destruct;

@end
