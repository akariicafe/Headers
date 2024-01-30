@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_nw_dictionary, OS_nw_array;

@interface NWConcrete_nw_storage : NSObject <OS_nw_storage> {
    char *path;
    NSObject<OS_dispatch_queue> *queue;
    struct sqlite3 { } *db;
    struct sqlite3_stmt { } *load_stmt;
    struct sqlite3_stmt { } *save_stmt;
    struct sqlite3_stmt { } *delete_stmt;
    NSObject<OS_nw_dictionary> *providers;
    NSObject<OS_nw_dictionary> *canvas_cache;
    NSObject<OS_nw_array> *flush_queue;
    struct nw_storage_chain { struct { struct nw_storage_chain *tqe_next; struct nw_storage_chain **tqe_prev; } entry; } chain;
    unsigned char flush_scheduled : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
