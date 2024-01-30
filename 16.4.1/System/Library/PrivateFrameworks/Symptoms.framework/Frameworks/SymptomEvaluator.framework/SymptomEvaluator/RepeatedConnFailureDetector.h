@class NSSet, NSMutableDictionary, NSDate;

@interface RepeatedConnFailureDetector : NSObject {
    NSSet *_whitelistedDaemons;
    NSMutableDictionary *_flowRecords;
    NSMutableDictionary *_reportDampeners;
    NSDate *_lastFlush;
}

- (void)_flush;
- (void)dealloc;
- (void)noteSuspectFlow:(id)a0 withOwner:(id)a1;
- (id)init;
- (void)_excessiveConnFailuresDetectedOn:(id)a0 owner:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;

@end
