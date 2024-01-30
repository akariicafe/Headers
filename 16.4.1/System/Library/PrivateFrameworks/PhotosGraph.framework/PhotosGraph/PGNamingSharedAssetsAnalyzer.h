@class NSString, PGGraphNamingProcessor, PGManager;

@interface PGNamingSharedAssetsAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor *_processor;
    PGManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)name;
- (void)findSharedAssetMatchesFromSharingRecords:(id)a0 personLocalIdentifiersByAssetUUID:(id)a1 graph:(id)a2 withProgressBlock:(id /* block */)a3;
- (id)initWithNamingProcessor:(id)a0;
- (id)initWithNamingProcessor:(id)a0 manager:(id)a1;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;

@end
