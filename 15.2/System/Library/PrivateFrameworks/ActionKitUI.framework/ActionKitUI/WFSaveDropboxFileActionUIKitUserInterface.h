@class NSString;
@protocol WFFileStorageServiceOperation;

@interface WFSaveDropboxFileActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFSaveDropboxFileActionUserInterface>

@property (retain, nonatomic) id<WFFileStorageServiceOperation> saveOperation;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
