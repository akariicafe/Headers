@class NSString, NSSet, ATXSuggestedPagesTunableConstants;

@interface ATXModeFaceComplicationHeuristicDataSource : NSObject <ATXModeFaceComplicationDataSource> {
    NSSet *_allComplicationDescriptors;
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addComplicationWithFamily:(long long)a0 extension:(id)a1 kind:(id)a2 container:(id)a3 score:(double)a4 to:(id)a5;
- (BOOL)_hasSignificantRemindersEvents;
- (id)_complicationsForGamingMode;
- (BOOL)_hasSignificantStocksEvents;
- (id)_complicationsForDrivingMode;
- (id)_complicationsForExerciseMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_complicationsForPersonalMode;
- (id)_complicationsForWorkMode;
- (id)init;
- (id)_complicationsForReadingMode;
- (id)_complicationsForMindfulnessMode;
- (id)_complicationsForSleepMode;
- (void).cxx_destruct;
- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;

@end
