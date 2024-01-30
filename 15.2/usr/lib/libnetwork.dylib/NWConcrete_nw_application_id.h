@class NSString;

@interface NWConcrete_nw_application_id : NSObject <OS_nw_application_id> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned char uuid[16];
    char *originating_process;
    char *bundle_id;
    struct { unsigned int val[8]; } audit_token;
    int pid;
    int system_service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redactedDescription;
- (void)dealloc;

@end
