@class NSString, NSDictionary, NSArray, NSDate, NSNumber;

@interface PLSubmissionConfig : NSObject {
    unsigned long long _submittedFilesMask;
}

@property double dice;
@property (retain) NSString *taskingBuild;
@property (retain) NSString *taskingPopulation;
@property (retain) NSString *taskingDeviceModels;
@property (retain) NSDictionary *taskingPercentage;
@property (retain) NSString *request;
@property (retain) NSString *ondemand;
@property (retain) NSNumber *capSize;
@property (retain) NSDictionary *taskingTables;
@property (retain) NSDictionary *hashEntries;
@property (retain) NSArray *removeEntries;
@property (retain) NSArray *trimmingQueries;
@property (retain) NSDictionary *taskingCondition;
@property (retain) NSArray *taskingFiles;
@property (readonly) BOOL hasFileToSubmit;
@property (readonly) BOOL submitPLL;
@property (readonly) BOOL submitMSS;
@property (readonly) BOOL submitSP;
@property (readonly) BOOL submitBDC;
@property (readonly) unsigned long long submittedFilesMask;
@property BOOL signpostDisable;
@property (retain) NSDictionary *signpostWhitelist;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSDate *lastBatteryTimestampSystem;
@property (retain) NSNumber *cacheSize;
@property short submitReasonType;
@property (retain) NSString *tagUUID;
@property BOOL seed;
@property BOOL internal;
@property (retain) NSArray *builds;
@property (retain) NSString *deviceModel;
@property (retain) NSString *filePath;
@property (retain) NSDictionary *ckTagConfig;

+ (id)getDateMarkerFromSystemDate:(id)a0;
+ (BOOL)internalSubmissionBehavior;
+ (void)clearTaskingDefaults;
+ (void)submitTaskingDefaultsCheckStateToCA:(id)a0;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)getSubmitReasonTypeToStorageEventOTAType;
- (id)getSubmitReasonTypeToAggdKey;
- (id)getDateMarker;
- (id)getSubmitReasonTypeToReasonLog;
- (id)getDateMarkerLegacy;
- (id)initWithReasonType:(short)a0;
- (void)submitFileStatsToAnalytics;
- (BOOL)shouldStartTaskingToday;
- (id)getSubmitReasonTypeToFlushReason;
- (void)readTaskingDefaults;
- (void)initTagInfoForReasonType:(short)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)initializeFilesToBeSubmitted;

@end
