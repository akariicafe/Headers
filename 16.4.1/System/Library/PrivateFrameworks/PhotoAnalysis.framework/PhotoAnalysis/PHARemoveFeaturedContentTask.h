@class NSString;

@interface PHARemoveFeaturedContentTask : NSObject <PHATask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)clearAllFeaturedStateForMemoriesAndSuggestionsWithGraphManager:(id)a0 error:(id *)a1;

@end
