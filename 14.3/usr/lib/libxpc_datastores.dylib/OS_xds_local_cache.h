@interface OS_xds_local_cache : NSObject {
    unsigned long long ds_type;
    void *data;
    unsigned long long size;
}

- (void)dealloc;

@end
