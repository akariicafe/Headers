@class NSObject;
@protocol OS_nw_array;

@interface NWConcrete_nw_http_fields : NSObject <OS_nw_http_fields> {
    NSObject<OS_nw_array> *fields;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
