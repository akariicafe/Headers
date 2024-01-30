@class CLKComplicationTimelineEntry, CLKComplicationTemplate, NSDate;

@interface NTKTimelineSetupOperation : NTKTimelineDataOperation {
    NSDate *_endDate;
    unsigned long long _privacyBehavior;
    unsigned long long _timelineAnimationBehavior;
    CLKComplicationTimelineEntry *_currentEntry;
    CLKComplicationTemplate *_alwaysOnTemplate;
}

@property (copy, nonatomic) id /* block */ handler;

- (void)_start;
- (void)_cancel;
- (void).cxx_destruct;
- (void)_getAlwaysOnTemplate;
- (void)_getCurrentEntry;
- (void)_getEndDate;
- (void)_getPrivacyBehavior;
- (void)_getTimelineAnimationBehavior;
- (void)_invokeHandler;

@end
