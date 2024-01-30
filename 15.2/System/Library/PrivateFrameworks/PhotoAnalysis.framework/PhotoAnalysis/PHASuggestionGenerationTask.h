@class NSDictionary, NSString;

@interface PHASuggestionGenerationTask : NSObject <PHATask>

@property (retain, nonatomic) NSDictionary *suggestionOptionsDictionary;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 reply:(id /* block */)a2;
- (unsigned char)suggestionProfileFromSuggestionType:(unsigned short)a0 subtype:(unsigned short)a1;

@end
