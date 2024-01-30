@class NSString, NSObject;
@protocol OS_nw_txt_record, OS_nw_array, OS_nw_endpoint;

@interface NWConcrete_nw_browse_result : NSObject <OS_nw_browse_result> {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_array> *interfaces;
    NSObject<OS_nw_txt_record> *txt_record;
    char *description;
    char *logging_description;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned char immutable : 1;
    unsigned char discovered_from_path : 1;
    unsigned char __pad_bits : 6;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
