@class NSString;

@interface PHASyndicationTask : NSObject <PHATask>

@property (nonatomic) BOOL performCurationJob;
@property (nonatomic) BOOL performGuestInferenceJob;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)init;
- (BOOL)shouldRunWithGraphManager:(id)a0;

@end
