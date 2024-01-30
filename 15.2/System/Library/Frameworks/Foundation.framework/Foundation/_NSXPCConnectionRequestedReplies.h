@interface _NSXPCConnectionRequestedReplies : NSObject {
    struct __CFDictionary { } *_replyDictionaryTable;
    struct __CFDictionary { } *_replyTransactionTable;
    struct __CFDictionary { } *_progressTable;
    unsigned char _invalid;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)init;
- (void)dealloc;

@end
