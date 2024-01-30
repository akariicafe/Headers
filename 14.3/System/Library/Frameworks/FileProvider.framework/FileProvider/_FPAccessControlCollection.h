@protocol FPXEnumerator;

@interface _FPAccessControlCollection : FPItemCollection {
    id<FPXEnumerator> _enumerator;
}

- (void).cxx_destruct;
- (id)initWithEnumerator:(id)a0;
- (id)description;
- (id)createDataSourceWithSortDescriptors:(id)a0;

@end
