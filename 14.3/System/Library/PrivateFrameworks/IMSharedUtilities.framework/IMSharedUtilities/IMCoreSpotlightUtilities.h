@interface IMCoreSpotlightUtilities : NSObject

+ (unsigned long long)lastIndexedRowID;
+ (BOOL)needsDeferredIndexing;
+ (void)setNeedsDeferredIndexing;
+ (unsigned long long)currentIndexVersion;
+ (unsigned long long)expectedIndexVersion;
+ (id)currentIndexProductVersion;
+ (unsigned long long)messageIndexBatchSize:(BOOL)a0;
+ (id)expectedIndexProductVersion;
+ (BOOL)bypassIndexVersionCheck;
+ (id)descriptionForReindexReason:(unsigned long long)a0;
+ (BOOL)needsIndexing;

@end
