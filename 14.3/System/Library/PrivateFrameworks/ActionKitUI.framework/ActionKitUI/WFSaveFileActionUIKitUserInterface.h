@class NSString;
@protocol WFFileStorageServiceOperation;

@interface WFSaveFileActionUIKitUserInterface : WFActionUserInterface <WFSaveFileActionUserInterface>

@property (retain, nonatomic) id<WFFileStorageServiceOperation> saveOperation;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithServiceName:(id)a0 input:(id)a1 managedLevel:(unsigned long long)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)selectedStorageServiceForName:(id)a0;

@end
