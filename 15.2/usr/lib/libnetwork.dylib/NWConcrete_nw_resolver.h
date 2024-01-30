@class NSString, NSObject;
@protocol OS_dispatch_group, OS_nw_context, OS_nw_endpoint, OS_nw_array, OS_nw_parameters, OS_dnssd_getaddrinfo, OS_dispatch_queue, OS_nw_path, OS_nw_interface;

@interface NWConcrete_nw_resolver : NSObject <OS_nw_resolver> {
    int status;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_context> *context;
    NSObject<OS_dispatch_group> *cancel_group;
    NSObject<OS_dnssd_getaddrinfo> *gai;
    unsigned int dns_service_id;
    struct _DNSServiceRef_t { } *dns_service;
    struct _DNSServiceRef_t { } *dns_service_secondary_pointer;
    unsigned int forced_protocol;
    int dns_error;
    unsigned short flags;
    id /* block */ update_block;
    id /* block */ cancel_handler;
    NSObject<OS_dispatch_queue> *client_queue;
    void *query_timer;
    void *delayed_reporting_timer;
    NSObject<OS_nw_array> *endpoint_array;
    id /* block */ alternative_handler;
    NSObject<OS_nw_array> *services;
    NSObject<OS_nw_array> *alternative_endpoints;
    NSObject<OS_nw_array> *alternative_protocols;
    NSObject<OS_nw_path> *path;
    NSObject<OS_nw_interface> *path_required_interface;
    NWConcrete_nw_resolver *internally_retained_object;
    unsigned char selected_resolver_config[16];
    int result_protocol;
    int result_provider;
    char log_str[84];
    unsigned int unique_id;
    unsigned char is_custom_resolver : 1;
    unsigned char used_local_cache : 1;
    unsigned char ipv4_used_resolver_cache : 1;
    unsigned char ipv6_used_resolver_cache : 1;
    unsigned char local_only : 1;
    unsigned char suppress_logging : 1;
    unsigned char has_ipv4 : 1;
    unsigned char has_ipv6 : 1;
    unsigned char svcb_requested : 1;
    unsigned char svcb_received : 1;
    unsigned char svcb_dohuri : 1;
    unsigned char is_standalone : 1;
    unsigned char has_oblivious_config : 1;
    unsigned char config_allows_failover : 1;
    unsigned char oblivious_config_fell_back : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
