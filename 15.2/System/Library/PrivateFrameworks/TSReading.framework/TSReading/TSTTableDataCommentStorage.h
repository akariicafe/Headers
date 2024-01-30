@class TSDCommentStorage;

@interface TSTTableDataCommentStorage : TSTTableDataObject {
    TSDCommentStorage *mCommentStorage;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initObjectWithCommentStorage:(id)a0;

@end
