@class SAWaitInfo, NSString, SATurnstileInfo, NSMutableArray;

@interface SACallTreeState : SACallTreeNode <SAJSONSerialization> {
    unsigned char _threadPriority;
    int _pid;
    unsigned int _microstackshotState;
    unsigned long long _threadId;
    SAWaitInfo *_waitInfo;
    SATurnstileInfo *_turnstileInfo;
    unsigned long long _state;
    NSMutableArray *_childIOEvents;
    NSMutableArray *_timeRanges;
    unsigned long long _endSampleIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
