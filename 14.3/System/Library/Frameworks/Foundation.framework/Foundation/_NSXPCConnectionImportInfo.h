@interface _NSXPCConnectionImportInfo : NSObject {
    unsigned long long _generationCount;
    struct __CFDictionary { } *_proxyNumberToCount;
    void *_secTaskRef;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _secTaskClearedOnce;
}

- (id)init;
- (void)dealloc;

@end
