@class NSString;

@interface ATXTimeBasedInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addBedtimeTransitionsForDate:(id)a0 toArray:(id)a1;
- (void)_addTransitionForDate:(id)a0 transitionHour:(long long)a1 transitionMinute:(long long)a2 isEntry:(BOOL)a3 activity:(unsigned long long)a4 toArray:(id)a5;
- (id)sessionPublisherFromStartTime:(double)a0;
- (id)transitionPublisherFromStartTime:(double)a0;
- (void)_addHomeTransitionsForDate:(id)a0 toArray:(id)a1;
- (void)_addWorkTransitionsForDate:(id)a0 toArray:(id)a1;

@end
