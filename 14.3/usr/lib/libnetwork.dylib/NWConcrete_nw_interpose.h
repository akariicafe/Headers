@class NSString, NSObject;
@protocol OS_nw_path_evaluator, OS_nw_context, OS_nw_dictionary, OS_dispatch_queue;

@interface NWConcrete_nw_interpose : NSObject <OS_nw_interpose> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned char client_uuid[16];
    int delegated_pid;
    int delegated_upid;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_dictionary> *flows;
    id /* block */ flow_event_handler;
    NSObject<OS_nw_context> *context;
    NSObject<OS_dispatch_queue> *client_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
