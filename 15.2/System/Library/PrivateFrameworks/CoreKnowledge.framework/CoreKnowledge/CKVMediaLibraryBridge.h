@class NSString, MPMediaLibrary;

@interface CKVMediaLibraryBridge : NSObject <CKVProviderDatasetBridge> {
    MPMediaLibrary *_mediaLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)itemClass;
- (id)init;
- (id)originApp;
- (BOOL)enumerateVocabularyItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithMediaLibrary:(id)a0;

@end
