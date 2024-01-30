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

- (void)setGroupID:(id)a0;
- (void)setAppleID:(id)a0;
- (void)clearCaches;
- (id)password;
- (void)setPassword:(id)a0;
- (void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id /* block */)a0;
- (BOOL)canDetermineGroupID;
- (void)clearAllCredentials;
- (id)groupID;
- (void)clearGroupID;
- (id)appleID;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)determineGroupIDWithCompletionHandler:(id /* block */)a0;

@end
