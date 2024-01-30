@class DownloadInfo, NSString, MADActivityStats, MADActivityCommandRequest, NSMutableDictionary, NSMutableString, NSObject;
@protocol OS_xpc_object, OS_os_activity;

@interface MADActivityTracker : NSObject

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) NSObject<OS_os_activity> *scopeActivity;
@property (nonatomic) BOOL validTracker;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (nonatomic) int command;
@property (retain, nonatomic) MADActivityCommandRequest *request;
@property (retain, nonatomic) NSObject<OS_xpc_object> *reply;
@property (retain, nonatomic) DownloadInfo *downloadInfo;
@property (nonatomic) unsigned long long owner;
@property (nonatomic) int instanceCount;
@property (retain, nonatomic) MADActivityTracker *parentTracker;
@property (retain, nonatomic) NSMutableDictionary *childDict;
@property (readonly, nonatomic) unsigned long long topLevel;
@property (readonly, nonatomic) unsigned long long initiatorType;
@property (readonly, nonatomic) NSString *initiatorName;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSString *activityUUID;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSMutableString *logLeader;
@property (readonly, nonatomic) NSMutableString *failureReason;
@property (retain, nonatomic) MADActivityStats *stats;

+ (id)nameOfStatus:(unsigned long long)a0;
+ (unsigned long long)categoryForCommand:(int)a0;
+ (id)nameOfLayer:(unsigned long long)a0;
+ (BOOL)persistedCommand:(int)a0;
+ (unsigned long long)topLevelActivityForCommand:(int)a0;

- (void)sendReply;
- (void)invalidate;
- (void).cxx_destruct;
- (void)warningNote:(id)a0 fromMethod:(id)a1 warning:(id)a2;
- (void)assignOwner:(unsigned long long)a0;
- (void)assignParentTracker:(id)a0;
- (void)associateActivityName:(id)a0;
- (void)associateCommandRequest:(id)a0;
- (void)associateDownloadInfo:(id)a0;
- (BOOL)associateEventualReply:(id)a0 withCommand:(int)a1;
- (void)associateXPCConnection:(id)a0;
- (void)enterOSActivityScope;
- (void)extendLogLeader:(id)a0 withValue:(id)a1;
- (void)failureResult:(int)a0 ofResultName:(id)a1 forReason:(id)a2;
- (id)init:(unsigned long long)a0 fromInitiator:(unsigned long long)a1 ofName:(id)a2 withCategory:(unsigned long long)a3 forAssetType:(id)a4 associatedWith:(id)a5;
- (void)leaveOSActivityScope;
- (void)perpareOSActivityScope;
- (void)successWithIssue:(id)a0;
- (void)usesChildDict;

@end
