@class SATimestamp;

@interface SANewThreadInfo : NSObject {
    int _oldPid;
    int _newPid;
    SATimestamp *_timestamp;
    unsigned long long _newTid;
}

- (id)debugDescription;
- (void).cxx_destruct;

@end
