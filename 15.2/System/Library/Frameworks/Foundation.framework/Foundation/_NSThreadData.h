@class NSMutableDictionary;

@interface _NSThreadData : NSObject {
    id _target;
    SEL _selector;
    id _argument;
    _Atomic unsigned long long _pac_signature;
    id dict;
    id name;
    int seqNum;
    unsigned char qstate;
    char qos;
    unsigned char cancel;
    _Atomic unsigned char status;
    id performQ;
    NSMutableDictionary *performD;
    struct _opaque_pthread_attr_t { long long __sig; char __opaque[56]; } attr;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *tid;
    double pri;
    double defpri;
}

- (id)init;

@end
