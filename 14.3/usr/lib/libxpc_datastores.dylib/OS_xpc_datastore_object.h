@class NSString, OS_xds_local_cache, NSObject;
@protocol OS_xpc_object;

@interface OS_xpc_datastore_object : NSObject <XDS_xpc_datastore_object> {
    unsigned long long ds_type;
    unsigned long long max_size;
    char *ds_name;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    OS_xds_local_cache *local_data;
    NSObject<OS_xpc_object> *conn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
