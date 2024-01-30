@class NSString;

@interface PHASharedLibrarySuggestionGenerationTask : NSObject <PHATask> {
    short _taskType;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)resetSuggestionsWithGraphManager:(id)a0 error:(id *)a1;

@end
