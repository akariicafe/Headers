@class NSString;
@protocol PGGraphDataModelEnrichmentProcessor;

@interface PHAEnrichmentTask : NSObject <PHATask>

@property (readonly, nonatomic) id<PGGraphDataModelEnrichmentProcessor> enrichmentProcessor;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)shouldRunWithGraphManager:(id)a0;

@end
