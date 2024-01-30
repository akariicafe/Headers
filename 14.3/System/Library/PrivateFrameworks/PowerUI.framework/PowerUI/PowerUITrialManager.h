@class NSString, TRITrackingId, TRIClient, NSObject;
@protocol OS_os_log;

@interface PowerUITrialManager : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain) TRITrackingId *trialTrackingID;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) TRIClient *trialClient;
@property (retain) NSString *treatmentID;
@property (retain) NSString *experimentID;
@property (retain, nonatomic) NSString *trialNamespaceName;

- (void).cxx_destruct;
- (id)initWithDefaultsDomain:(id)a0;
- (id)trialFactor:(id)a0;
- (id)loadModelFromPath:(id)a0 deleteExistingFiles:(BOOL)a1;
- (void)loadTrialUpdates;
- (id)loadTrialEngageModelByDeletingExistingModel:(BOOL)a0;
- (id)loadTrialDurationModelByDeletingExistingModel:(BOOL)a0;
- (double)loadTrialThreshold;
- (double)loadTrialAdjustedHours;
- (double)loadTrialMinInputChargeDuration;

@end
