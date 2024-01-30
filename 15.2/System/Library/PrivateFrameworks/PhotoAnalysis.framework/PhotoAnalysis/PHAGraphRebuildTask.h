@class NSString;

@interface PHAGraphRebuildTask : NSObject <PHATask>

@property (nonatomic) BOOL useMemoryCategory;
@property (nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)shouldRunWithGraphManager:(id)a0;

@end
