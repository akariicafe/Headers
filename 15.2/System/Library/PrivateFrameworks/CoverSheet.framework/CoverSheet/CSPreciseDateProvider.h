@class NSString, SBUIPreciseClockTimer;

@interface CSPreciseDateProvider : NSObject <SBFDateProviding> {
    SBUIPreciseClockTimer *_preciseClockTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)date;
- (void).cxx_destruct;
- (id)init;
- (id)observeMinuteUpdatesWithHandler:(id /* block */)a0;
- (void)removeMinuteUpdateHandler:(id)a0;

@end
