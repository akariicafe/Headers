@class NSString, ICURLRequest, NSObject;
@protocol OS_dispatch_queue;

@interface HSAccountStore : NSObject {
    int _defaultsDidChangeToken;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) ICURLRequest *groupIDRequest;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *password;

+ (id)defaultStore;

- (void)setAppleID:(id)a0;
- (void)determineGroupIDWithCompletionHandler:(id /* block */)a0;
- (void)clearCaches;
- (void)clearGroupID;
- (id)init;
- (void).cxx_destruct;
- (id)groupID;
- (BOOL)canDetermineGroupID;
- (void)setGroupID:(id)a0;
- (void)dealloc;
- (id)appleID;
- (void)setPassword:(id)a0;
- (id)password;
- (void)clearAllCredentials;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id /* block */)a0;

@end
