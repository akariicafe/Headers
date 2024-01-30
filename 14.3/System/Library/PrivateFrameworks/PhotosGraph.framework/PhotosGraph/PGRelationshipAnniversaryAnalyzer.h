@class PGGraphRelationshipProcessor, NSString;

@interface PGRelationshipAnniversaryAnalyzer : NSObject <PGRelationshipAnalyzer>

@property (readonly, weak, nonatomic) PGGraphRelationshipProcessor *processor;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;
- (id)initWithRelationshipProcessor:(id)a0;

@end
