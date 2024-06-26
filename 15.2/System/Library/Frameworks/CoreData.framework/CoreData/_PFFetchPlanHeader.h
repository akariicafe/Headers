@class NSSQLEntity, NSPersistentStore, NSSQLModel, NSSQLRowCache, NSFetchRequest, NSManagedObjectContext;

@interface _PFFetchPlanHeader : NSObject {
    NSFetchRequest *fetch_request;
    unsigned int requested_batch_size;
    NSPersistentStore *sql_core;
    NSSQLModel *sql_model;
    NSSQLEntity *statement_entity;
    NSManagedObjectContext *current_context;
    NSSQLRowCache *row_cache;
    void /* function */ *entity_for_ek_funptr;
    struct { unsigned char principal_entity_has_subentities : 1; unsigned char fetch_only_primary_keys : 1; unsigned char fetch_results_style : 3; unsigned char use_clean_memory : 1; unsigned int _reserved : 26; } flags;
}

@end
