@class NSMutableDictionary;

@interface PUPhotosFileProviderItemProvider : NSItemProvider

@property (retain, nonatomic) NSMutableDictionary *_progressByUUID;
@property (retain, nonatomic) NSMutableDictionary *_progressProxyByUUID;
@property (retain, nonatomic) NSMutableDictionary *_progressSubscriberByUUID;
@property (nonatomic) BOOL _copyToTemporaryDirectoryBeforeCallingOpenInPlaceCompletionHandler;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)loadDataRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadFileRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadInPlaceFileRepresentationForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadObjectOfClass:(Class)a0 completionHandler:(id /* block */)a1;
- (void)_completeProgressWithUUID:(id)a0 success:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)_progressURLForTypeIdentifier:(id)a0;
- (void)_startObservingProgressProxyIfNeeded:(id)a0 UUID:(id)a1;
- (id)_startProgressForURL:(id)a0 UUID:(id)a1 cancellationHandler:(id /* block */)a2;

@end
