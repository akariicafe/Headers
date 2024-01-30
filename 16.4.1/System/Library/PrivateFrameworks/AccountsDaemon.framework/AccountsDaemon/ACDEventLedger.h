@class NSMutableArray;

@interface ACDEventLedger : NSObject {
    char *_crashInfoString;
}

@property (retain) NSMutableArray *eventLedger;

+ (id)sharedLedger;

- (id)historyDescription;
- (id)init;
- (void)recordEvent:(id)a0;
- (void)simulateCrashWithMessage:(id)a0;
- (void).cxx_destruct;

@end
