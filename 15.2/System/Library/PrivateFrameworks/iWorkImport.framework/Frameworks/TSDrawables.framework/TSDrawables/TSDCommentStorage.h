@class NSString, NSArray, NSDate, TSKAnnotationAuthor;

@interface TSDCommentStorage : TSPObject <TSPCopying>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) NSArray *replies;
@property (weak, nonatomic) TSDCommentStorage *parent;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isShared;
- (BOOL)isOwner;
- (id)copyWithContext:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 text:(id)a1 creationDate:(id)a2 author:(id)a3 replies:(id)a4;
- (id)copyWithAuthor:(id)a0;
- (void)commentWillBeAddedToDocumentRoot;
- (id)copyWithDeletedReply:(id)a0;
- (id)copyWithInsertedReply:(id)a0;
- (BOOL)p_matchesCommentStorage:(id)a0;
- (id)copyWithText:(id)a0;
- (BOOL)p_canModifyCommentStorageWithAuthor:(id)a0 docIsReadOnly:(BOOL)a1;
- (BOOL)p_canDeleteCommentStorageWithAuthor:(id)a0 docIsReadOnly:(BOOL)a1;
- (id)initWithContext:(id)a0 author:(id)a1;
- (id)creationDateString;
- (id)creationDateStringShort;
- (id)copyWithReplies:(id)a0;
- (id)copyWithEditedReply:(id)a0;
- (id)copyByAppendingText:(id)a0;
- (id)copyWithDate:(id)a0;
- (BOOL)canEditWithAuthor:(id)a0 docIsReadOnly:(BOOL)a1;
- (BOOL)canDeleteWithAuthor:(id)a0 docIsReadOnly:(BOOL)a1;
- (id)matchingReply:(id)a0;
- (BOOL)isEqualToCommentStorage:(id)a0;

@end
