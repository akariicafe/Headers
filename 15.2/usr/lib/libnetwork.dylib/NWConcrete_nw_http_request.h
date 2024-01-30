@class NWConcrete_nw_http_field, NWConcrete_nw_http_fields;

@interface NWConcrete_nw_http_request : NSObject <OS_nw_http_request> {
    NWConcrete_nw_http_field *method;
    NWConcrete_nw_http_field *scheme;
    NWConcrete_nw_http_field *authority;
    NWConcrete_nw_http_field *path;
    NWConcrete_nw_http_fields *fields;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
