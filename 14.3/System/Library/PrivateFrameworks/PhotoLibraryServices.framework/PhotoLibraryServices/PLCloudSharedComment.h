@class NSString, PLCloudFeedCommentsEntry, NSDate, NSNumber, PLManagedAsset;

@interface PLCloudSharedComment : PLManagedObject

@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSString *commenterHashedPersonID;
@property (retain, nonatomic) NSNumber *isDeletable;
@property (retain, nonatomic) NSNumber *isLike;
@property (retain, nonatomic) NSNumber *isCaption;
@property (retain, nonatomic) NSNumber *isBatchComment;
@property (retain, nonatomic) NSNumber *isMyComment;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSDate *commentDate;
@property (retain, nonatomic) NSDate *commentClientDate;
@property (retain, nonatomic) PLManagedAsset *commentedAsset;
@property (retain, nonatomic) PLManagedAsset *likedAsset;
@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedCommentEntry;
@property (retain, nonatomic) PLCloudFeedCommentsEntry *cloudFeedLikeCommentEntry;
@property (readonly, nonatomic) BOOL isLikeBoolValue;
@property (readonly, weak, nonatomic) NSString *commenterEmail;
@property (readonly, weak, nonatomic) NSString *commenterFirstName;
@property (readonly, weak, nonatomic) NSString *commenterLastName;
@property (readonly, weak, nonatomic) NSString *commenterFullName;
@property (readonly, weak, nonatomic) PLCloudFeedCommentsEntry *cloudFeedEntry;
@property (retain, nonatomic) NSString *commentType;

+ (id)entityName;
+ (id)cloudSharedCommentsWithGUIDs:(id)a0 inLibrary:(id)a1;
+ (id)_cloudSharedCommentsWithPredicate:(id)a0 inManagedObjectContext:(id)a1;
+ (id)cloudSharedCommentWithGUID:(id)a0 inLibrary:(id)a1;
+ (id)insertNewCommentIntoAsset:(id)a0 commentDate:(id)a1 withText:(id)a2 isLike:(BOOL)a3 isMyComment:(BOOL)a4 inLibrary:(id)a5;
+ (id)cloudSharedCommentsWithCommentDate:(id)a0 inManagedObjectContext:(id)a1;

- (void)willSave;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (BOOL)_isInterestingToUser;
- (BOOL)isInterestingForAlbumsSorting;
- (BOOL)shouldNotifyAsNotificationWithMediaStreamInfo:(id)a0 asCaptionOnly:(BOOL *)a1;
- (id)commenterDisplayName;
- (BOOL)canBeDeletedByUser;
- (id)init;
- (id)asset;
- (BOOL)matchesCommentText:(id)a0 isLike:(BOOL)a1;

@end
