@class NSMutableDictionary;

@interface BRCVersionsFileProvider : BRCFileProvider {
    NSMutableDictionary *_operationsByName;
}

- (id)_physicalURLForURL:(id)a0;
- (void)dumpToContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithVolume:(id)a0;
- (void)_cancelProvidingItemAtURL:(id)a0 toReaderWithID:(id)a1;
- (void)_provideItemAtURL:(id)a0 toReaderWithID:(id)a1 completionHandler:(id /* block */)a2;
- (id)_fileReactorID;

@end
