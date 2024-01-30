@class NSString, NSMutableDictionary;

@interface BRCVersionsFileProvider : BRCFileProvider {
    NSMutableDictionary *_operationsByName;
    NSString *_personaIdentifier;
}

- (id)_physicalURLForURL:(id)a0;
- (id)_fileReactorID;
- (void)dumpToContext:(id)a0;
- (void)_cancelProvidingItemAtURL:(id)a0 toReaderWithID:(id)a1;
- (id)initWithVolume:(id)a0 personaIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_provideItemAtURL:(id)a0 toReaderWithID:(id)a1 completionHandler:(id /* block */)a2;

@end
