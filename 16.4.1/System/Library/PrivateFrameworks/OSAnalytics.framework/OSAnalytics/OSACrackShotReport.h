@class NSDictionary, NSString;

@interface OSACrackShotReport : OSAStackShotReport {
    int _cpuType;
    NSString *_procPath;
    NSString *_bundleID;
    NSDictionary *_termination_info;
    BOOL _isSystemWatchdog;
}

@property (retain, nonatomic) NSDictionary *spindump;
@property (readonly) BOOL isSnapshotDisabled;

- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)reportNamePrefix;
- (id)decode_cpuType;
- (id)problemType;
- (BOOL)saveWithOptions:(id)a0;
- (id)additionalIPSMetadata;
- (id)decode_reason:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a0 reason:(id)a1;
- (id)initWithPid:(int)a0 procName:(id)a1 bundleID:(id)a2 exitSnapshot:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a3 reason:(id)a4;
- (id)initForPid:(int)a0 exitSnapshot:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a1 reason:(id)a2;
- (void).cxx_destruct;

@end
