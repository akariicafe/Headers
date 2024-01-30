@class NSSet, NSXPCConnection, NSDictionary, NSString, NSObject, UAPasteboardGeneration;
@protocol OS_dispatch_queue;

@interface UASharedPasteboardManager : NSObject <UASharedPasteboardManagerResponseProtocol>

@property (retain) NSObject<OS_dispatch_queue> *serverQ;
@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCConnection *controllConnection;
@property int disableCount;
@property (retain) id controllSyncObject;
@property BOOL remotePasteboardAvailable;
@property BOOL currentGenerationHasUpdates;
@property BOOL updateScheduled;
@property (retain) NSObject<OS_dispatch_queue> *pasteboardReadQ;
@property (retain) NSSet *disallowedTypesForSending;
@property (retain) NSSet *disallowedTypesForReceiving;
@property (retain) NSSet *bomCheckTypes;
@property (retain) NSDictionary *typeBOMs;
@property (retain) NSDictionary *typeAliases;
@property id /* block */ completionBlock;
@property (copy) id /* block */ localPasteboardWasFetched;
@property (retain) UAPasteboardGeneration *currentGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedManager;
+ (BOOL)dontConnectToServer;

- (void)tellClientDebuggingEnabled:(BOOL)a0 logFileHandle:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)fetchRemoteName;
- (void)stopPreventingPasteboardSharing;
- (void)clearLocalPasteboardInformation;
- (BOOL)addData:(id)a0 toItemAtIndex:(unsigned long long)a1 generation:(unsigned long long)a2;
- (id)currentRemoteDeviceName;
- (void)doClearLocalPasteboardInfo;
- (void)fetchPasteboardDataForProcess:(int)a0 withCompletion:(id /* block */)a1;
- (void)fetchPasteboardStatus:(id /* block */)a0;
- (void)fetchPasteboardTypesForProcess:(int)a0 withCompletion:(id /* block */)a1;
- (BOOL)isRemotePasteboardAvailable;
- (void)pickupLocalChanges:(id)a0 iterNumber:(long long)a1 cloneDir:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)requestPasteboardFetchReturnEarly;
- (void)requestRemotePasteboardDataForProcess:(int)a0 withCompletion:(id /* block */)a1;
- (void)requestRemotePasteboardTypesForProcess:(int)a0 withCompletion:(id /* block */)a1;
- (void)sendUpdateToServer:(id)a0;
- (id)serializeFileType:(id)a0 intoInfo:(id)a1 withFile:(id)a2 intoDir:(id)a3;
- (id)serializeItem:(id)a0 intoInfo:(id)a1 withFile:(id)a2 intoDir:(id)a3;
- (id)serializeType:(id)a0 intoInfo:(id)a1 withFile:(id)a2;
- (void)startPreventingPasteboardSharing;
- (BOOL)typeIsDisallowedForReceiving:(id)a0;
- (BOOL)typeIsDisallowedForSending:(id)a0;
- (void)writeLocalPasteboardToFile:(id)a0 itemDir:(id)a1 extension:(id)a2 withCompletion:(id /* block */)a3;
- (void)writeLocalPasteboardToFile:(id)a0 itemDir:(id)a1 withCompletion:(id /* block */)a2;

@end
