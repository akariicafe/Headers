@class NSString, NSObject;
@protocol OS_nw_path_evaluator, OS_nw_context, OS_nw_parameters, OS_dispatch_queue;

@interface NWConcrete_nw_nat64_prefixes_resolver : NSObject <OS_nw_nat64_prefixes_resolver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int ifindex;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NWConcrete_nw_nat64_prefixes_resolver *internally_retained_object;
    unsigned int dns_service_id;
    struct _DNSServiceRef_t { } *dns_service;
    int dns_error;
    id /* block */ update_handler;
    id /* block */ cancel_handler;
    NSObject<OS_dispatch_queue> *client_queue;
    struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } *ipv6_addrs;
    NSObject<OS_nw_path_evaluator> *evaluator;
    int address_count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
