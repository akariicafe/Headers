@class NSArray, WBSCyclerIterationCounter, NSString;

@interface WBSCyclerExtensionsTestSuite : NSObject <WBSCyclerOperationalTestSuite>

@property (readonly, copy, nonatomic) NSArray *operations;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) WBSCyclerIterationCounter *iterationCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)relativeProbabilitiesForOperationsWithTopLevelItem:(id)a0;
- (void)runWithTarget:(id)a0 completionHandler:(id /* block */)a1;

@end
