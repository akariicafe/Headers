@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface DTFileTransferService : DTXService <DTFileTransferServiceDebugInboxAuthorizedAPI> {
    NSObject<OS_dispatch_queue> *_coordinationQueue;
    NSMutableArray *_activeFileTransfers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (id)_beginTransferOfFileNamed:(id)a0 outError:(id *)a1;
- (BOOL)_fileTransfer:(id)a0 isValidForApplication:(id)a1;
- (id)_moveFileTransfer:(id)a0 inDataContainerOfApplicationBundleIdentifier:(id)a1 withError:(id *)a2;
- (id)_moveFileTransfer:(id)a0 toDebugInboxOfApplicationWithBundleIdentifier:(id)a1 outError:(id *)a2;
- (BOOL)_unarchivePackageIfNecessary:(id)a0;
- (id)openFileInDocumentDebugInbox:(id)a0 forApplicationWithBundleIdentifier:(id)a1 withAnnotation:(id)a2;
- (id)transferData:(id)a0 intoAppContainerForBundleIdentifier:(id)a1 filename:(id)a2;
- (id)transferFile:(id)a0 toDebugInboxOfApplicationWithBundleIdentifier:(id)a1 destinationFilename:(id)a2;

@end
