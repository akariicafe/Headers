@class NSString, PGManager, PGGraphNamingProcessor;

@interface PGNamingCMMAnalyzer : NSObject <PGNamingAnalyzer> {
    PGManager *_manager;
    PGGraphNamingProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)name;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;
- (id)initWithNamingProcessor:(id)a0 manager:(id)a1;
- (void)findCMMMatchesFromSharingRecords:(id)a0 graph:(id)a1 withProgressBlock:(id /* block */)a2;

@end
