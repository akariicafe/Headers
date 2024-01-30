@class PGGraphNamingProcessor, NSString;

@interface PGNamingSharedAssetsAnalyzer : NSObject <PGNamingAnalyzer>

@property (readonly, weak, nonatomic) PGGraphNamingProcessor *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)name;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;
- (void)findSharedAssetMatchesFromSharingRecords:(id)a0 personLocalIdentifiersByAssetUUID:(id)a1 graph:(id)a2 withProgressBlock:(id /* block */)a3;

@end
