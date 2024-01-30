@class NSString;

@interface CDMContextUpdateService : CDMDAGBaseService {
    NSString *locale;
}

+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (void)doCoreAnalyticsForContextUpdateOutcome:(int)a0 numTurnsRollback:(int)a1 success:(BOOL)a2 locale:(id)a3;
- (id)handleRequestCommandTypeNames;

@end
