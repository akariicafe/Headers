@class NSString;

@interface NWConcrete_nw_protocol_instance_registrar : NSObject <OS_nw_protocol_instance_registrar> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    struct nw_protocol_entry_list { struct nw_protocol_entry *lh_first; } instances;
    struct nw_protocol_identifier { char name[32]; int level; int mapping; } identifier;
    unsigned long long instance_count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redactedDescription;
- (void)dealloc;

@end
