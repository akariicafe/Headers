@interface TSTTableDataCustomFormat : TSTTableDataObject {
    void *mCustomFormat;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initObjectWithCustomFormat:(void *)a0;

@end
