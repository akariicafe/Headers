@class NSString, NSURL;

@interface CKVSimulatedDatasetBridge : NSObject <CKVProviderDatasetBridge> {
    NSURL *_directoryURL;
    unsigned short _datasetType;
    Class _processorClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_directoryExistsAtURL:(id)a0;

- (void).cxx_destruct;
- (Class)itemClass;
- (id)init;
- (id)originApp;
- (BOOL)enumerateVocabularyItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithDatasetType:(unsigned short)a0;

@end
