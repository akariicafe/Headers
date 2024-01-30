@class NSMutableArray;

@interface CLSCurationDebugObject : NSObject {
    unsigned long long _tentativeSectionStateHistoryLength;
    unsigned long long _stateAtBeginningOfTentativeSection;
}

@property (readonly) unsigned long long state;
@property (readonly) NSMutableArray *stateHistory;

+ (id)stringForState:(unsigned long long)a0;

- (id)timestamp;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)endTentativeSectionWithSuccess:(BOOL)a0;
- (void)beginTentativeSection;
- (void)setState:(unsigned long long)a0 withReason:(id)a1 agent:(id)a2 stage:(id)a3;
- (void)resetWithReason:(id)a0 agent:(id)a1 stage:(id)a2;

@end
