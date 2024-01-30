@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {
    int type;
    char *bonjour_type;
    char *bonjour_domain;
    char *description;
    char *logging_description;
    NSObject<OS_dispatch_data> *custom_data;
    id /* block */ browse_block;
    char *application_service_name;
    char *bundle_id;
    unsigned int device_types;
    unsigned char include_txt_record : 1;
    unsigned char sign_results : 1;
    unsigned char __pad_bits : 5;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redactedDescription;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
