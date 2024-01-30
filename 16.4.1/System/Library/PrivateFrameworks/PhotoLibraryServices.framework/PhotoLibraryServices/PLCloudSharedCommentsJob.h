@class NSArray, NSString, NSDictionary;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSArray *msASComments;
@property (retain, nonatomic) NSString *commentGUID;
@property (retain, nonatomic) NSString *assetGUID;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;

+ (void)assetsdLocallyProcessAddedComments:(id)a0 assetGUID:(id)a1 albumGUID:(id)a2 info:(id)a3 libraryServicesManager:(id)a4;
+ (void)deleteSharedCommentFromServer:(id)a0;
+ (void)locallyProcessAddedComments:(id)a0 assetGUID:(id)a1 albumGUID:(id)a2 info:(id)a3;
+ (void)locallyProcessDeletedComments:(id)a0 info:(id)a1;
+ (void)publishCommentToServer:(id)a0;

- (void)run;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (long long)daemonOperation;
- (id)description;
- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (void).cxx_destruct;
- (void)executeDeleteCommentFromServer;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)executePublishCommentToServer;
- (BOOL)shouldArchiveXPCToDisk;

@end
