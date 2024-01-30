@interface iOSPMR : NSObject {
    BOOL gPMR_ENABLED;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (unsigned long long)returnStartTime_Nanoseconds;
- (double)returnDelta_Milliseconds:(unsigned long long)a0;
- (id)stopTimerAndReportPMR:(unsigned long long)a0 logFilename:(id)a1 pmrKey:(id)a2 comment:(id)a3;
- (unsigned long long)returnDelta_Nanoseconds:(unsigned long long)a0;
- (double)convertNanoSecondsToSeconds:(unsigned long long)a0;
- (void)writePMRInfoToFile:(id)a0 pmrString:(id)a1;
- (void)addDelta:(unsigned long long)a0 toArray:(id)a1;

@end
