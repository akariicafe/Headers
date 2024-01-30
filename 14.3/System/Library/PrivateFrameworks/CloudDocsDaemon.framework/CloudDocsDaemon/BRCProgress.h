@class NSArray, NSMutableDictionary, BRCAccountSession;

@interface BRCProgress : NSProgress {
    NSMutableDictionary *_progressByAliasContainerID;
    BRCAccountSession *_session;
    char _group;
}

@property (readonly, nonatomic) NSArray *parentFileIDs;
@property (readonly, nonatomic) BOOL isPublished;

+ (id)_progressForDocument:(id)a0 group:(char)a1 sizeInfo:(id)a2;
+ (id)downloadProgressForDocument:(id)a0 sizeInfo:(id)a1;
+ (id)uploadProgressForDocument:(id)a0 sizeInfo:(id)a1;

- (void).cxx_destruct;
- (void)setCompletedUnitCount:(long long)a0;
- (void)brc_publish;
- (void)brc_unpublish;
- (id)initWithGroup:(char)a0 parentFileIDs:(id)a1 session:(id)a2;
- (void)addAliasItem:(id)a0;

@end
