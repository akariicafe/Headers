@class NSArray, NSDictionary, NSString, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface IMFileTransferCenter : NSObject <IMFileTransferCenter> {
    NSMutableDictionary *_guidToTransferMap;
    NSMutableDictionary *_guidToRemovedTransferMap;
    NSMutableDictionary *_accountIDToTransferGUIDsMap;
    NSMutableArray *_preauthorizedInfos;
    NSMutableArray *_preauthorizedGUIDs;
    NSMutableSet *_activeTransfers;
    NSMutableSet *_pendingTransfers;
    BOOL _disconnectionListenerSetUp;
    NSMutableDictionary *_fetchHighQualityVariantCompletionHandlers;
}

@property (readonly, nonatomic) NSDictionary *transfers;
@property (readonly, nonatomic) NSArray *activeTransferGUIDs;
@property (readonly, nonatomic) NSArray *orderedTransfersGUIDs;
@property (readonly, nonatomic) BOOL hasActiveFileTransfers;
@property (readonly, nonatomic) BOOL hasPendingFileTransfers;
@property (nonatomic, getter=shouldIssueSandboxEstensionsForTransfers) BOOL issueSandboxEstensionsForTransfers;
@property (readonly, weak, nonatomic) NSArray *activeTransfers;
@property (readonly, weak, nonatomic) NSArray *orderedTransfers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (Class)transferCenterClass;
+ (Class)fileTransferClass;
+ (void)setTransferCenterClass:(Class)a0;

- (id)guidsForStoredAttachmentPayloadData:(id)a0 messageGUID:(id)a1;
- (void)acknowledgeAllPendingTransfers;
- (BOOL)registerGUID:(id)a0 forNewOutgoingTransferWithLocalURL:(id)a1;
- (void)_handleFileTransfer:(id)a0 highQualityDownloadSucceededWithPath:(id)a1;
- (void)_fetchHighQualityVariantForTransferGUID:(id)a0 completion:(id /* block */)a1;
- (void)preauthorizeFileTransferFromOtherPerson:(id)a0 account:(id)a1 filename:(id)a2 saveToPath:(id)a3;
- (id)transfersForAccount:(id)a0;
- (void)preWarmConnection;
- (void)registerTransferWithDaemon:(id)a0;
- (id)transferForGUID:(id)a0 includeRemoved:(BOOL)a1;
- (void).cxx_destruct;
- (void)setAuxImageForTransfer:(id)a0 value:(BOOL)a1;
- (void)_handleFileTransferHighQualityDownloadFailed:(id)a0;
- (void)assignTransfer:(id)a0 toMessage:(id)a1 account:(id)a2;
- (void)acceptFileTransferIfPreauthorzed:(id)a0;
- (void)dealloc;
- (void)_handleFileTransfer:(id)a0 updatedWithProperties:(id)a1;
- (void)setAuxVideoForTransfer:(id)a0 value:(BOOL)a1;
- (BOOL)doesLocalURLRequireArchiving:(id)a0 toHandle:(id)a1;
- (void)_clearTransfers;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)a0 useLegacyGuid:(BOOL)a1;
- (void)_addActiveTransfer:(id)a0;
- (void)stopTransfer:(id)a0;
- (void)_handleAllFileTransfers:(id)a0;
- (void)_removeAllActiveTransfers;
- (void)fetchHighQualityVariantForTransfer:(id)a0 completion:(id /* block */)a1;
- (void)acceptTransfer:(id)a0;
- (void)_removePendingTransfer:(id)a0;
- (void)_handleFileTransfer:(id)a0 createdWithProperties:(id)a1;
- (void)_removeActiveTransfer:(id)a0;
- (void)retargetTransfer:(id)a0 toPath:(id)a1;
- (void)sendTransfer:(id)a0;
- (void)_initiateHighQualityVariantDownloadWithDaemonForGUID:(id)a0;
- (void)_handleFileTransfers:(id)a0 createdWithLocalPaths:(id)a1;
- (void)_addTransfer:(id)a0;
- (void)acceptTransfer:(id)a0 withPath:(id)a1 autoRename:(BOOL)a2 overwrite:(BOOL)a3;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)a0;
- (void)_addPendingTransfer:(id)a0;
- (void)_handleFileTransfer:(id)a0 updatedWithCurrentBytes:(unsigned long long)a1 totalBytes:(unsigned long long)a2 averageTransferRate:(unsigned long long)a3;
- (BOOL)isFileTransfer:(id)a0 preauthorizedWithDictionary:(id)a1;
- (void)deleteTransfer:(id)a0;
- (id)transferForGUID:(id)a0;
- (void)clearFinishedTransfers;
- (void)_addSpotlightProperties:(id)a0 sender:(id)a1 recipients:(id)a2 incoming:(BOOL)a3;
- (void)assignTransfer:(id)a0 toHandle:(id)a1;
- (BOOL)wasFileTransferPreauthorized:(id)a0;
- (void)acknowledgePendingTransfer:(id)a0;
- (void)_daemonRestarted:(id)a0;
- (void)_addTransfer:(id)a0 toAccount:(id)a1;
- (id)chatForTransfer:(id)a0;
- (void)removeTransfer:(id)a0;

@end
