@class NSObject;
@protocol OS_nw_fd_wrapper;

@interface nw_listener_inbox_socket : nw_listener_inbox {
    void *_source;
    NSObject<OS_nw_fd_wrapper> *_sockfd_wrapper_for_connection_group_only;
    int _sockfd_for_logging_only_do_not_close_or_use;
    int _sockfd_from_client;
    unsigned char _ipProtocol;
    unsigned char _listenUUID[16];
}

- (id)initWithParameters:(id)a0 delegate:(id)a1;
- (BOOL)suspend;
- (BOOL)cancel;
- (id)start;
- (id)description;
- (void).cxx_destruct;
- (BOOL)resume;

@end
