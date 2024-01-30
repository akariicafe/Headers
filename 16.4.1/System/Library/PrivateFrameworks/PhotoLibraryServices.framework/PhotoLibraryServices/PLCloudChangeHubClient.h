@class NSUUID;

@interface PLCloudChangeHubClient : NSObject {
    unsigned char _nodeUUID[16];
}

@property (readonly, copy) NSUUID *uuid;

- (id)initWithUUID:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fetchPendingEventsSinceIndex:(unsigned long long)a0;
- (id)fetchResultsSinceIndex:(unsigned long long)a0;
- (id)resultsFromReply:(id)a0 sinceIndex:(unsigned long long)a1;
- (id)successfulResultWithEvents:(id)a0 changeHubEventIndex:(unsigned long long)a1;
- (id)unsuccesfulResultWithWithType:(long long)a0;

@end
