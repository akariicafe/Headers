@interface _MFInvocationQOSOverride : NSObject {
    struct pthread_override_s { } *_override;
}

@property (readonly, nonatomic, getter=isLowPriority) BOOL lowPriority;
@property (readonly, nonatomic) unsigned int desiredQoS;
@property (readonly, nonatomic) struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *pthread;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)applyOverrideWhileForeground:(BOOL)a0;
- (id)initWithPthread:(struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)a0 desiredQoS:(unsigned int)a1 lowPriority:(BOOL)a2;
- (BOOL)removeOverride;

@end
