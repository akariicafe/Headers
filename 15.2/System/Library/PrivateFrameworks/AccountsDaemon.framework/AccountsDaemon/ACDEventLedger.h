@class NSMutableArray;

@interface ACDEventLedger : NSObject {
    char *_crashInfoString;
}

@property (retain) NSMutableArray *eventLedger;

+ (id)sharedLedger;

- (id)historyDescription;
- (void).cxx_destruct;
- (id)init;
- (void)simulateCrashWithMessage:(id)a0;
- (void)recordEvent:(id)a0;

@end
