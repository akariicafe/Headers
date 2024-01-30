@class NSString, _CDInteractionStore, NSDate, NSObject, _CDFTCPInteractionDataCollectionSession;
@protocol OS_xpc_object;

@interface _CDFTCPInteractionDataCollectionTask : NSObject

@property (readonly, copy, nonatomic) NSString *sessionPath;
@property (readonly, copy, nonatomic) NSDate *collectionDate;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) _CDFTCPInteractionDataCollectionSession *session;
@property (readonly, nonatomic) double samplingRate;
@property (readonly, nonatomic) unsigned long long maxBatches;
@property (readonly, nonatomic) unsigned long long daysPerBatch;
@property (readonly, nonatomic) unsigned long long twoWeekPeriodsInLookback;
@property (nonatomic) BOOL selectedForDataCollection;
@property (nonatomic) BOOL deleteSessionOnCleanup;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;

- (void)execute;
- (id)initWithStore:(id)a0 activity:(id)a1 sessionPath:(id)a2 collectionDate:(id)a3 samplingRate:(double)a4 maxBatches:(unsigned long long)a5 daysPerBatch:(unsigned long long)a6 twoWeekPeriodsInLookback:(unsigned long long)a7;
- (void)cleanup;
- (void)_execute;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0 activity:(id)a1;

@end
