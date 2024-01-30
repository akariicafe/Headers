@class NSString, NSXPCConnection, PLLibraryServicesManager, PLAssetsdClient, NSObject, PLXPCTransaction;
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
@property (readonly, nonatomic) NSString *jobDescription;

+ (void)runDaemonSideWithXPCEvent:(id)a0 libraryServicesManager:(id)a1;

- (void)run;
- (long long)daemonOperation;
- (id)init;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (void)runDaemonSide;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetsdClient:(id)a0;
- (BOOL)shouldArchiveXPCToDisk;
- (void)sendToAssetsd;
- (BOOL)shouldRunOnDaemonSerialQueue;
- (void)handleReply;
- (void)archiveXPCToDisk:(id)a0;
- (void)sendToAssetsdWithReply;
- (id)newDictionaryReplyForObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
