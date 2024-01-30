@class NWConcrete_nw_http_field, NWConcrete_nw_http_fields;

@interface NWConcrete_nw_http_response : NSObject <OS_nw_http_response> {
    NWConcrete_nw_http_field *status_field;
    char *reason_phrase;
    NWConcrete_nw_http_fields *fields;
    unsigned char reason_phrase_is_const : 1;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
