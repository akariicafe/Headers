@class NSMutableDictionary, NSString, MCMSQLiteDB, NSObject;
@protocol OS_dispatch_queue;

@interface MCMChildParentMapCache : NSObject <MCMSQLiteDBCodeSigningPeerageDelegate, MCMChildParentMapCache>

@property (readonly, nonatomic) MCMSQLiteDB *db;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parentIdentifierForChildIdentifier:(id)a0;
- (void)codeSigningDB:(id)a0 addChildIdentifier:(id)a1 forParentIdentifier:(id)a2;
- (void)codeSigningDB:(id)a0 removeParentIdentifier:(id)a1;
- (id)childBundleIdentifiersForParentIdentifier:(id)a0;
- (id)initWithDB:(id)a0 queue:(id)a1;
- (void).cxx_destruct;

@end
