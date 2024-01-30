@class NSString, NSURL, NSOperationQueue;
@protocol FPDFileCoordinationProviderDelegate;

@interface FPDFileCoordinationProvider : NSObject <NSFileProvider> {
    NSURL *_providedItemsURL;
}

@property (weak) id<FPDFileCoordinationProviderDelegate> delegate;
@property (copy) NSString *extensionIdentifier;
@property (getter=isRegistered) BOOL registered;
@property (readonly, copy) NSURL *_providedItemsURL;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (readonly, copy) NSString *_fileReactorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_physicalURLForURL:(id)a0;
- (void)_provideItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_cancelProvidingItemAtURL:(id)a0 toReaderWithID:(id)a1;
- (void)_providedItemAtURL:(id)a0 didGainPresenterWithID:(id)a1;
- (void)_movingItemAtURL:(id)a0 requiresProvidingWithDestinationURL:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_providedItemAtURL:(id)a0 withPresenterWithID:(id)a1 didMoveToURL:(id)a2;
- (id)initWithRootURL:(id)a0;
- (void)_provideItemAtURL:(id)a0 toReaderWithID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_providedItemAtURL:(id)a0 didLosePresenterWithID:(id)a1;
- (id)delegateForURL:(id)a0;
- (void)_writerWithID:(id)a0 didFinishWritingForURL:(id)a1;

@end
