@class DTSysmonTapRecordDecoder, NSArray;

@interface DTSysmonRecordEnumerator : NSObject {
    unsigned long long _heartbeatTime;
}

@property (retain, nonatomic) DTSysmonTapRecordDecoder *recordDecoder;
@property (retain, nonatomic) NSArray *samples;

- (unsigned long long)enumerateRecordsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithHeartbeatTime:(unsigned long long)a0;

@end
