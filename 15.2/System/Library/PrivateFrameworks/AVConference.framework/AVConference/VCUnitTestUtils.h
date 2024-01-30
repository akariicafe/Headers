@class NSArray;

@interface VCUnitTestUtils : NSObject {
    NSArray *_crashFilesBeforeTest;
    NSArray *_crashFilesAfterTest;
}

+ (void)validateCrashFile:(id)a0 exactErrStringToMatch:(id)a1 crashType:(int)a2 errorCode:(int *)a3;
+ (void)setAutomaticTimeEnabled:(BOOL)a0;

- (void)dealloc;
- (void)captureInitialCrashReporterSnapshot:(int *)a0;
- (void)captureFinalCrashReporterSnapshotAndCheckForCrash:(id)a0 crashType:(int)a1 errorCode:(int *)a2;

@end
