@class _SCRCStackNode;

@interface _SCRCStackQueueEnumerator : NSEnumerator {
    _SCRCStackNode *_currentListMemeber;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithListMember:(id)a0;

@end
