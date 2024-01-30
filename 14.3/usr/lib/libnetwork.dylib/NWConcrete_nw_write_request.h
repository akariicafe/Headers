@class NSObject, NSString, NWConcrete_nw_connection;
@protocol OS_dispatch_data, OS_nw_content_context;

@interface NWConcrete_nw_write_request : NSObject <OS_nw_write_request> {
    NWConcrete_nw_write_request *next;
    NWConcrete_nw_write_request *tail;
    id /* block */ completion;
    NWConcrete_nw_connection *connection;
    unsigned int qos_class;
    NSObject<OS_dispatch_data> *data;
    NSObject<OS_nw_content_context> *context;
    NSObject<OS_nw_content_context> *original_message;
    unsigned long long consumed_bytes;
    double relative_priority;
    unsigned char complete : 1;
    unsigned char reported : 1;
    unsigned char idempotent : 1;
    unsigned char write_close : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
