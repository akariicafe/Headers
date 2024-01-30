@class NSString, BSRelativeDateTimer;

@interface BSUIRelativeDateLabel : BSUIDefaultDateLabel <BSRelativeDateTimerDelegate> {
    BSRelativeDateTimer *_relativeDateTimer;
    unsigned long long _value;
    unsigned long long _resolution;
    long long _comparedToNow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)timerFiredWithValue:(unsigned long long)a0 forResolution:(unsigned long long)a1 comparedToNow:(long long)a2;
- (void)setTimeZoneRelativeStartDate:(id)a0 absoluteStartDate:(id)a1;
- (id)constructLabelString;

@end
