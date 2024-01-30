@class NSObject;
@protocol OS_nw_path, OS_nw_channel, OS_nw_path_flow;

@interface nw_ip_channel_inbox : nw_listener_inbox {
    NSObject<OS_nw_path> *_path;
    NSObject<OS_nw_path_flow> *_flow;
    NSObject<OS_nw_channel> *_channel;
    struct nw_protocol { unsigned char flow_id[16]; struct nw_protocol_identifier *identifier; struct nw_protocol_callbacks *callbacks; struct nw_protocol *output_handler; void *handle; struct nw_protocol *default_input_handler; void *output_handler_context; } _protocol;
    const union sockaddr_in_4_6 { struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x0; struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x1; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x2; } *_local;
    unsigned int _scopeid;
    unsigned short _local_port;
    unsigned char _ip_proto;
    unsigned char _bound_local_address : 1;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)cancel;

@end
