@class NSString, NSMutableDictionary, NSDate, SBFDateTimeController;
@protocol SBFDateProviding;

@interface SBFOverridableDateProvider : NSObject <SBDateTimeOverrideObserver, SBFDateProviding> {
    SBFDateTimeController *_dateTimeController;
    id<SBFDateProviding> _underlyingProvider;
    NSMutableDictionary *_minuteHandlers;
    unsigned long long _nextToken;
    id _underlyingToken;
    NSDate *_overrideDate;
    double _overrideDateOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controller:(id)a0 didChangeOverrideDateFromDate:(id)a1;
- (id)initWithDateProvider:(id)a0;
- (void)_updateForOverrides;
- (id)date;
- (void).cxx_destruct;
- (id)init;
- (id)observeMinuteUpdatesWithHandler:(id /* block */)a0;
- (void)_updateUnderlyingProvider;
- (void)removeMinuteUpdateHandler:(id)a0;
- (void)_fireHandlersForDate:(id)a0;

@end
