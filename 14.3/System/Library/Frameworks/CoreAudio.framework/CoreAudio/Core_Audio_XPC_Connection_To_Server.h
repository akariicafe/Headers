@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface Core_Audio_XPC_Connection_To_Server : NSObject

@property BOOL first_contact;
@property BOOL definitely_die;
@property BOOL server_is_dead;
@property BOOL registered_for_notification;
@property int notify_token;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lifetime_event_queue;
@property (retain, nonatomic) NSXPCConnection *current_connection;
@property (nonatomic) struct weak_ptr<HAL_Server_Lifetime_Events> { struct HAL_Server_Lifetime_Events *__ptr_; struct __shared_weak_count *__cntrl_; } lifetime_event_handler;

+ (id)server;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)create;
- (id).cxx_construct;
- (BOOL)do_ping:(id)a0;
- (id)get_proxy:(id /* block */)a0;
- (id)get_async_proxy:(id /* block */)a0;
- (void)handle_server_death;
- (void)handle_server_resurrection;
- (void)remove_connection;
- (void)add_connection:(id)a0;
- (void)send_server_died;
- (void)send_server_resurrected;
- (void)send_first_contact;
- (void)register_for_resurrection_notification;
- (id)_lazy_get_connection;
- (id)lazy_get_connection;

@end
