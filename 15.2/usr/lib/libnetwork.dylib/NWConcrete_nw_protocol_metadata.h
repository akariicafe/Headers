@class NSString, NWConcrete_nw_protocol_definition;

@interface NWConcrete_nw_protocol_metadata : NSObject <OS_nw_protocol_metadata> {
    NWConcrete_nw_protocol_definition *definition;
    unsigned char identifier[16];
    void *handle;
    char *data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
