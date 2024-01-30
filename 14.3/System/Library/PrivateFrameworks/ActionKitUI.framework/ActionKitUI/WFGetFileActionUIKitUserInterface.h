@class NSString;

@interface WFGetFileActionUIKitUserInterface : WFActionUserInterface <WFGetFileActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithServiceName:(id)a0 directoryPath:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)selectedStorageServiceForName:(id)a0;
- (void)finishWithResults:(id)a0 contentAttributionSet:(id)a1 error:(id)a2;

@end
