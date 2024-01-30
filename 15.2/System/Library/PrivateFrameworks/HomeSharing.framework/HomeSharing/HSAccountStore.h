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

- (id)groupID;
- (void)setPassword:(id)a0;
- (void)clearCaches;
- (void)setGroupID:(id)a0;
- (id)appleID;
- (void)determineGroupIDWithCompletionHandler:(id /* block */)a0;
- (void)setAppleID:(id)a0;
- (void)clearAllCredentials;
- (BOOL)canDetermineGroupID;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id /* block */)a0;
- (id)password;
- (void).cxx_destruct;
- (id)init;
- (void)clearGroupID;
- (void)dealloc;

@end
