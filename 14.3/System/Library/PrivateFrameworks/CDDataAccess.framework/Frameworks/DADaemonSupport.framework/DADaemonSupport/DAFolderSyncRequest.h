@class DAFolder, NSArray;

@interface DAFolderSyncRequest : NSObject

@property (retain, nonatomic) DAFolder *folder;
@property (nonatomic) BOOL hasRemoteChanges;
@property (nonatomic) BOOL isInitialUberSync;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) BOOL isResyncAfterConnectionFailed;
@property (nonatomic) BOOL isResyncAfterServerError;
@property (nonatomic) BOOL containsPostponedActions;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFolder:(id)a0 hasRemoteChanges:(BOOL)a1 isInitialUberSync:(BOOL)a2;

@end
