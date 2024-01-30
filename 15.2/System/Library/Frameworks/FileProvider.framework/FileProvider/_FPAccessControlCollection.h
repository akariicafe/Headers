@protocol FPXEnumerator;

@interface _FPAccessControlCollection : FPItemCollection {
    id<FPXEnumerator> _enumerator;
}

- (id)initWithEnumerator:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)createDataSourceWithSortDescriptors:(id)a0;

@end
