@class NSString, NSObject, NWConcrete_nw_protocol_definition;
@protocol OS_xpc_object;

@interface NWConcrete_nw_protocol_options : NSObject <OS_nw_protocol_options> {
    NWConcrete_nw_protocol_definition *definition;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *protocol_handle;
    NSObject<OS_xpc_object> *legacy_parameters;
    char *log_id_str;
    unsigned short log_id_num;
    void *handle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
