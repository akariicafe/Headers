@class PLXPCTransaction, NSXPCConnection, PLLibraryServicesManager, PLAssetsdClient, NSObject;
@protocol OS_xpc_object;

@interface PLDaemonJob : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_xpcReply;
    PLXPCTransaction *_transaction;
    id /* block */ _replyHandler;
    unsigned long long _signpostId;
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (retain, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (copy, nonatomic) id /* block */ replyHandler;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (readonly, nonatomic) PLAssetsdClient *assetsdClient;

+ (void)runDaemonSideWithXPCEvent:(id)a0 libraryServicesManager:(id)a1;

- (long long)daemonOperation;
- (void)encodeWithCoder:(id)a0;
- (void)handleReply;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (BOOL)shouldRunOnDaemonSerialQueue;
- (void)archiveXPCToDisk:(id)a0;
- (void)sendToAssetsdWithReply;
- (id)newDictionaryReplyForObject:(id)a0;
- (void)run;
- (id)initWithAssetsdClient:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)runDaemonSide;
- (id)initWithCoder:(id)a0;
- (void)encodeToXPCObject:(id)a0;
- (BOOL)shouldArchiveXPCToDisk;
- (void)sendToAssetsd;

@end
