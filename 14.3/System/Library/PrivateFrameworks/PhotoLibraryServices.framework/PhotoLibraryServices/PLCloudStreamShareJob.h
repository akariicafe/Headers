@class NSArray, NSString;

@interface PLCloudStreamShareJob : PLCloudSharingJob

@property (retain, nonatomic) NSArray *mediaSources;
@property (retain, nonatomic) NSString *albumCloudGUID;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSArray *recipientsInfo;

+ (void)publishMediaFromSources:(id)a0 toSharedAlbum:(id)a1 withCommentText:(id)a2;
+ (void)publishMediaFromSources:(id)a0 toNewSharedAlbumWithName:(id)a1 withCommentText:(id)a2 recipients:(id)a3;

- (void)run;
- (long long)daemonOperation;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (void)runDaemonSide;
- (id)description;
- (void)addInfosForRecipients:(id)a0;
- (BOOL)shouldArchiveXPCToDisk;
- (void)executeDaemonOperation;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;

@end
