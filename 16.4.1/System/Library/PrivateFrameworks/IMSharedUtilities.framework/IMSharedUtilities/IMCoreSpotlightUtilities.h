@interface IMCoreSpotlightUtilities : NSObject

+ (id)descriptionForReindexReason:(unsigned long long)a0;
+ (BOOL)needsIndexing;
+ (BOOL)verboseLoggingEnabled;
+ (BOOL)bypassIndexVersionCheck;
+ (id)currentIndexProductVersion;
+ (unsigned long long)currentIndexVersion;
+ (id)expectedIndexProductVersion;
+ (unsigned long long)expectedIndexVersion;
+ (unsigned long long)lastDonatedRowID;
+ (unsigned long long)lastIndexedRowID;
+ (unsigned long long)messageIndexBatchSize:(BOOL)a0;
+ (BOOL)needsDeferredIndexing;
+ (BOOL)needsDonation;
+ (BOOL)needsInitialDonation;
+ (void)setNeedsDeferredIndexing;
+ (void)setNeedsInitialDonation:(BOOL)a0;

@end
