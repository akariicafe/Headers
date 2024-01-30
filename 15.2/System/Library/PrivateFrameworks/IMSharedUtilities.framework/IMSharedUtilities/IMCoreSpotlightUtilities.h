@interface IMCoreSpotlightUtilities : NSObject

+ (BOOL)needsDeferredIndexing;
+ (BOOL)needsDonation;
+ (id)expectedIndexProductVersion;
+ (BOOL)verboseLoggingEnabled;
+ (unsigned long long)messageIndexBatchSize:(BOOL)a0;
+ (BOOL)needsInitialDonation;
+ (unsigned long long)expectedIndexVersion;
+ (unsigned long long)lastDonatedRowID;
+ (void)setNeedsInitialDonation:(BOOL)a0;
+ (id)currentIndexProductVersion;
+ (id)descriptionForReindexReason:(unsigned long long)a0;
+ (unsigned long long)lastIndexedRowID;
+ (BOOL)bypassIndexVersionCheck;
+ (BOOL)needsIndexing;
+ (void)setNeedsDeferredIndexing;
+ (unsigned long long)currentIndexVersion;

@end
