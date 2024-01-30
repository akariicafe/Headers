@interface APOdmlLogUtility : NSObject

+ (void)logModelInputWithAdamID:(id)a0 adamID:(id)a1;
+ (void)logTrainingRowFeatures:(id)a0;
+ (void)logWithLoggerKey:(id)a0 message:(id)a1 category:(unsigned long long)a2;
+ (id)printDESRecordInSegments:(id)a0 isPlugin:(BOOL)a1;
+ (void)printDESRecordRowOrder:(id)a0 iterationNumber:(id)a1;
+ (id)printInSegments:(id)a0 log:(id)a1 isPlugin:(BOOL)a2;
+ (id)printModelDeltasInSegments:(id)a0 isPlugin:(BOOL)a1;

@end
