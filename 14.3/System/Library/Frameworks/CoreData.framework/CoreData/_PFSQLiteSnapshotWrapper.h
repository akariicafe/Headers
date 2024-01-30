@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying> {
    struct sqlite3_snapshot { unsigned char x0[48]; } *_s;
    int _externalReferences;
    int _flags;
}

@property (readonly, nonatomic) const void *bytes;

- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
