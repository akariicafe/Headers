@class NSString, PGGraphRelationshipProcessor;

@interface PGRelationshipAgeAnalyzer : NSObject <PGRelationshipAnalyzer> {
    PGGraphRelationshipProcessor *_processor;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRelationshipProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;

@end
