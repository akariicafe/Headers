@interface HDWorkoutSessionEntity : HDHealthEntity

+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)privateSubEntities;
+ (id)sessionsForSource:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)sessionIdentifierForRecoveryInProfile:(id)a0 expirationInterval:(double)a1 error:(id *)a2;
+ (id)lookupSessionWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)createSessionWithIdentifier:(id)a0 source:(id)a1 configuration:(id)a2 state:(long long)a3 profile:(id)a4 error:(id *)a5;
+ (id)sessionsExcludingIdentifiers:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

- (id)stateWithTransaction:(id)a0 error:(id *)a1;
- (id)workoutEventsInTransaction:(id)a0 error:(id *)a1;
- (id)startDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)setStartDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)endDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)setEndDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setWorkoutConfiguration:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)insertWorkoutEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)updateLatestActivityDate:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)workoutConfigurationWithTransaction:(id)a0 error:(id *)a1;
- (id)hasFailedInTransaction:(id)a0 error:(id *)a1;
- (BOOL)setHasFailed:(BOOL)a0 transaction:(id)a1 error:(id *)a2;
- (id)clientBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)setClientBundleIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)clientApplicationIdentifier:(id)a0 error:(id *)a1;
- (BOOL)setClientApplicationIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)sourceWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)setSource:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)associatedBuilderWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)setAssociatedBuilder:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setState:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (id)requestedTargetStateWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)setRequestedTargetState:(long long)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)finishWithTransaction:(id)a0 error:(id *)a1;
- (id)latestActivityDateInTransaction:(id)a0 error:(id *)a1;
- (BOOL)updateLatestActivityDateWithTransaction:(id)a0 error:(id *)a1;

@end
