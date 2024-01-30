@class PGGraphNamingProcessor, NSString;

@interface PGNamingRelationshipAnalyzer : NSObject <PGNamingAnalyzer>

@property (readonly, weak, nonatomic) PGGraphNamingProcessor *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)name;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;
- (void)findRelationshipMatchesFromContactIdentifiersByRelationship:(id)a0 graph:(id)a1 withProgressBlock:(id /* block */)a2;

@end
