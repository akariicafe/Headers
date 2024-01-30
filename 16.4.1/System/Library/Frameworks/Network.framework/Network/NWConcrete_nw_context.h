@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_nw_resolver_config, OS_dispatch_workloop;

@interface NWConcrete_nw_context : NSObject <OS_nw_context> {
    NSObject<OS_dispatch_workloop> *workloop;
    char *identifier;
    struct nw_context_cache { struct _cache_entries_head { struct nw_association_cache_entry *x0; struct nw_association_cache_entry **x1; } x0; struct _idle_cache_entries_head { struct nw_association_cache_entry *x0; struct nw_association_cache_entry **x1; } x1; struct nw_hash_table *x2; struct nw_hash_table *x3; struct nw_hash_table *x4; void *x5; unsigned int x6; unsigned int x7; } *cache;
    struct nw_context_globals { void *x0; struct nw_timer_list_head { struct nw_timer_entry *x0; struct nw_timer_entry **x1; } x1; struct nw_hash_table *x2; unsigned long long x3; struct os_unfair_lock_s { unsigned int x0; } x4; struct os_unfair_lock_s { unsigned int x0; } x5; struct os_unfair_lock_s { unsigned int x0; } x6; struct nw_hash_table *x7; void *x8; void *x9; unsigned long long x10; id x11; id /* block */ x12; id x13; id x14; id x15; id x16; struct nw_mem_buffer_manager *x17; struct nw_mem_buffer_manager *x18; struct nw_mem_buffer_manager *x19; struct nw_mem_buffer_manager *x20; struct nw_mem_buffer_manager *x21; struct nw_mem_buffer_manager *x22; struct nw_mem_buffer_manager *x23; } *globals;
    NWConcrete_nw_context *isolated_context;
    NSObject<OS_nw_resolver_config> *fallback_resolver_config;
    NSObject<OS_dispatch_queue> *idle_block_queue;
    id /* block */ idle_block;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } activate_lock;
    unsigned int max_cache_entries;
    unsigned int target_cache_entries;
    unsigned int max_idle_cache_entries;
    long long association_dormant_delay;
    long long context_purge_delay;
    _Atomic unsigned long long inline_tid;
    int scheduling_mode;
    int privacy_level;
    id /* block */ tracker_lookup_callback;
    unsigned char isolate_protocol_stack : 1;
    unsigned char isolate_protocol_cache : 1;
    unsigned char is_implicit : 1;
    unsigned char is_inline : 1;
    unsigned char is_inline_and_cancelled : 1;
    unsigned char is_isolated_context : 1;
    unsigned char activated : 1;
    unsigned char required_encrypted_resolution : 1;
    unsigned char do_not_log_trackers : 1;
    unsigned char has_active_instances : 1;
    unsigned char _pad_bits : 6;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
