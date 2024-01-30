@class NSString, NSTimer, NSDate;
@protocol BSUIDateLabelDelegate;

@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel> {
    NSDate *_timeZoneRelativeEndDate;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    BOOL _effectiveAllDay;
    BOOL _isCoalescingUpdates;
    BOOL _needsUpdateFromCoalesce;
    NSTimer *_updateTimer;
}

@property (readonly, nonatomic) NSDate *timeZoneRelativeStartDate;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (weak, nonatomic) id<BSUIDateLabelDelegate> delegate;
@property (nonatomic) long long labelType;
@property (nonatomic) BOOL isTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_forceUpdate;
- (void)startCoalescingUpdates;
- (id)constructLabelString;
- (void)prepareForReuse;
- (void)update;
- (void)_updateTimerFired:(id)a0;
- (void)setTimeZoneRelativeEndDate:(id)a0;
- (void)setTimeZoneRelativeStartDate:(id)a0 absoluteStartDate:(id)a1;
- (void)dealloc;
- (void)stopCoalescingUpdates;
- (BOOL)isDateWithinEffectiveAllDayRange:(id)a0;
- (void)setEndDate:(id)a0 withTimeZone:(id)a1;
- (id)init;
- (void)updateTextIfNecessary;
- (BOOL)isEffectiveAllDay;
- (void).cxx_destruct;
- (void)setStartDate:(id)a0 withTimeZone:(id)a1;

@end
