@interface TSTTableDataCustomFormat : TSTTableDataObject {
    void *mCustomFormat;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithCustomFormat:(void *)a0;

@end
