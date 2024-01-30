@class NSString, NSObject;
@protocol OS_nw_protocol_instance_registrar, OS_dnssd_cname_array, OS_nw_protocol_definition, OS_nw_txt_record, OS_nw_context, OS_dispatch_data, OS_nw_array, OS_nw_interface;

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_interface> *interface;
    int interface_type;
    NSString *ns_description;
    char *description;
    NSString *ns_redacted_description;
    char *redacted_description;
    char *known_tracker_name;
    char *tracker_owner;
    NWConcrete_nw_endpoint *parent_endpoint;
    NSObject<OS_dnssd_cname_array> *cname_array;
    struct nw_endpoint_alterative_s { struct { struct nw_endpoint_alterative_s *tqe_next; struct nw_endpoint_alterative_s **tqe_prev; } chain; NWConcrete_nw_endpoint *endpoint; NSObject<OS_nw_protocol_definition> *applicable_protocol; } first_alternative;
    struct { struct nw_endpoint_alterative_s *tqh_first; struct nw_endpoint_alterative_s **tqh_last; } alternative_list;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } endpoint_lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } description_lock;
    struct nw_hash_table { } *associations;
    NSObject<OS_nw_protocol_instance_registrar> *registrar;
    NSObject<OS_nw_array> *endpoint_edges;
    unsigned short alternate_port;
    unsigned char is_local_domain : 1;
    unsigned char parent_is_proxy : 1;
    unsigned char is_registered : 1;
    unsigned char description_used : 1;
    unsigned char redacted_description_used : 1;
    unsigned char do_not_redact_description : 1;
    unsigned char approved_app_domain : 1;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) const char *domainForPolicy;
@property (readonly, nonatomic) const char *hostname;
@property (readonly, nonatomic) unsigned short port;
@property (retain, nonatomic) NSObject<OS_nw_txt_record> *txtRecord;
@property (retain, nonatomic) NSObject<OS_dispatch_data> *echConfig;
@property (nonatomic) unsigned short priority;
@property (nonatomic) unsigned short weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyDictionary;
- (unsigned long long)getHash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;
- (id)redactedDescription;
- (void)dealloc;

@end
