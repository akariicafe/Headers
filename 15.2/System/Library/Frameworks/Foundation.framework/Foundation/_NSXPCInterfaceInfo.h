@interface _NSXPCInterfaceInfo : NSObject {
    unsigned long long _remoteVersion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _knownSelectorsLock;
    struct __CFDictionary { } *_knownSelectors;
    struct __CFDictionary { } *_methodInfo;
    Class _xpcDOSubclass;
    BOOL _specialCaseObject;
}

- (id)init;
- (void)dealloc;

@end
