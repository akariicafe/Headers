@class _SCRCStackNode;

@interface _SCRCStackQueueEnumerator : NSEnumerator {
    _SCRCStackNode *_currentListMemeber;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithListMember:(id)a0;

@end
