@class NSMutableDictionary;

@interface _NSThreadData : NSObject {
    id dict;
    id name;
    id target;
    SEL selector;
    id argument;
    int seqNum;
    unsigned char qstate;
    char qos;
    unsigned char cancel;
    unsigned char status;
    id performQ;
    NSMutableDictionary *performD;
    struct _opaque_pthread_attr_t { long long __sig; char __opaque[56]; } attr;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *tid;
    double pri;
    double defpri;
}

@end
