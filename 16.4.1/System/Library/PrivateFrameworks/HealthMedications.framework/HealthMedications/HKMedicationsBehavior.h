@interface HKMedicationsBehavior : NSObject

@property (nonatomic) BOOL medicationsFutureMigrationsEnabled;

+ (id)sharedBehavior;
+ (BOOL)_medicationFutureMigrationsEnabled;
+ (void)resetSharedBehavior;
+ (void)setSharedBehavior:(id)a0;

- (id)init;

@end
