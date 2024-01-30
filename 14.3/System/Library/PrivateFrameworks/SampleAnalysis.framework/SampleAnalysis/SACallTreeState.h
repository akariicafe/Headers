@class SAWaitInfo, NSString, SATimestamp, SATurnstileInfo;

@interface SACallTreeState : SACallTreeNode <SAJSONSerialization> {
    unsigned char _threadPriority;
    int _pid;
    unsigned int _microstackshotState;
    SATimestamp *_startTimestamp;
    unsigned long long _threadId;
    SAWaitInfo *_waitInfo;
    SATurnstileInfo *_turnstileInfo;
    unsigned long long _state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (id)initWithWaitInfo:(id)a0 turnstileInfo:(id)a1 state:(unsigned long long)a2 microstackshotState:(unsigned int)a3 pid:(int)a4 threadId:(unsigned long long)a5 threadPriority:(unsigned char)a6 startSampleIndex:(unsigned long long)a7 startTimestamp:(id)a8 sampleCount:(unsigned long long)a9;

@end
