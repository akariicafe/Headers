@class SATimestamp;

@interface SAKPerfState : NSObject {
    char *_onCoreBitArray;
    unsigned int _numCores;
    BOOL _mostRecentSampleIsPET;
    int _petTimerID;
    struct ktrace_session { } *_session;
    unsigned long long _latestMachAbsTimeParsed;
    SATimestamp *_mostRecentSampleTimestamp;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
