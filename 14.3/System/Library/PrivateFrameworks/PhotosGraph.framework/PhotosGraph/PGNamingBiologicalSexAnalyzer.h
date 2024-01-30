@class PGGraphNamingProcessor, NSString;

@interface PGNamingBiologicalSexAnalyzer : NSObject <PGNamingAnalyzer>

@property (readonly, weak, nonatomic) PGGraphNamingProcessor *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)name;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;
- (unsigned long long)sexMatchBetweenPersonBiologicalSex:(unsigned long long)a0 andContactBiologicalSex:(unsigned long long)a1;

@end
