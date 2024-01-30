@interface NWConcrete_nw_http_field : NSObject <OS_nw_http_field> {
    char *name;
    char *name_canonical;
    char *name_well_known;
    char *value;
    char *value_original;
    unsigned long long name_length;
    unsigned long long value_length;
    void /* function */ *value_setter;
    void /* function */ *value_deallocator;
    void *value_deallocator_context;
    int indexing_strategy;
    unsigned char name_is_canonical : 1;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
