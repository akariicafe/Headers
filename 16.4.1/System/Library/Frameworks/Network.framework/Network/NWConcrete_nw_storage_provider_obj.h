@class NSString;

@interface NWConcrete_nw_storage_provider_obj : NSObject <OS_nw_storage_provider_obj> {
    struct nw_storage_provider { void /* function */ *lookup; void /* function */ *store; void /* function */ *remove; void /* function */ *key; void /* function */ *canvas_create; void /* function */ *canvas_deserialize; void /* function */ *canvas_serialize; void /* function */ *canvas_dirty; void /* function */ *canvas_can_evict; void /* function */ *canvas_memory_size; void /* function */ *canvas_compact; void /* function */ *needs_canvas_destroy; void /* function */ *canvas_destroy; void /* function */ *canvas_remove_past; } callbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
