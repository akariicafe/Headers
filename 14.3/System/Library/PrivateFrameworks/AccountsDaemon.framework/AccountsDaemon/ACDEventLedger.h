@class NSMutableArray;

@interface ACDEventLedger : NSObject {
    char *_crashInfoString;
}

@property (retain) NSMutableArray *eventLedger;

+ (id)sharedLedger;

- (id)init;
- (void).cxx_destruct;
- (void)recordEvent:(id)a0;
- (void)simulateCrashWithMessage:(id)a0;
- (id)historyDescription;

@end
