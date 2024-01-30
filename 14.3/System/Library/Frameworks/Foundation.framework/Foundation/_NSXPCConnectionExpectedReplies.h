@interface _NSXPCConnectionExpectedReplies : NSObject {
    struct __CFDictionary { } *_replyTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    unsigned long long _sequence;
}

- (id)init;
- (void)dealloc;

@end
