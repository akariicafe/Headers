@class NSSet, NSMutableDictionary, NSDate;

@interface RepeatedConnFailureDetector : NSObject {
    NSSet *_whitelistedDaemons;
    NSMutableDictionary *_flowRecords;
    NSMutableDictionary *_reportDampeners;
    NSDate *_lastFlush;
}

- (void)_excessiveConnFailuresDetectedOn:(id)a0 owner:(id)a1;
- (void)noteSuspectFlow:(id)a0 withOwner:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_flush;
- (void)invalidate;
- (void)dealloc;

@end
