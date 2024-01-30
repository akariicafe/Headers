@class NSString, NSHashTable;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeIsSleepingBasedOnBacklightDataFeaturizer : NSObject <ATXModeFeaturizer>

@property (retain, nonatomic) NSHashTable *timers;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginListening;
- (id)provideFeatures;
- (void)stopListening;
- (void)handleNewEvent;
- (void)addTimerForDate:(id)a0;
- (id)queryEvents;
- (id)init;
- (void).cxx_destruct;
- (id)returnValueOnError;

@end
