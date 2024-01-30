@class NSObject, _NSXPCConnectionExportInfo;
@protocol OS_dispatch_group;

@interface _NSXPCConnectionExportedObjectTable : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    _NSXPCConnectionExportInfo *_proxy1;
    struct __CFDictionary { } *_proxyNumberToObject;
    struct __CFDictionary { } *_objectToProxyNumber;
    unsigned long long _next;
    BOOL _valid;
    NSObject<OS_dispatch_group> *_replyGroup;
}

- (id)init;
- (void)dealloc;
- (id)description;

@end
