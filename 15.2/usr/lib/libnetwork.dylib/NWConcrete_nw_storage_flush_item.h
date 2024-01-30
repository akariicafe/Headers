@class NSString;

@interface NWConcrete_nw_storage_flush_item : NSObject <OS_nw_storage_flush_item> {
    char *_type;
    char *_key;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
