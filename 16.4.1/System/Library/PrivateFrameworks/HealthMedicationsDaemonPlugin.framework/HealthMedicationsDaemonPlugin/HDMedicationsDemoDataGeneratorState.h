@class NSDate;

@interface HDMedicationsDemoDataGeneratorState : NSObject

@property (nonatomic) BOOL didSetupOntologyData;
@property (nonatomic) BOOL didSaveIntialData;
@property (nonatomic) BOOL hasScheduledMedications;
@property (retain, nonatomic) NSDate *latestLogDate;
@property (retain, nonatomic) NSDate *latestTakenLogDate;

- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
