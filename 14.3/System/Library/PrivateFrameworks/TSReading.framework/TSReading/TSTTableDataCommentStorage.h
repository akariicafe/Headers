@class TSDCommentStorage;

@interface TSTTableDataCommentStorage : TSTTableDataObject {
    TSDCommentStorage *mCommentStorage;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithCommentStorage:(id)a0;

@end
