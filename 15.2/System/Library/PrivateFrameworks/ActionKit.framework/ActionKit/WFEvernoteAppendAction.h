@interface WFEvernoteAppendAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)performSearch:(id)a0 inNotebook:(id)a1 maxResults:(unsigned long long)a2;
- (void)uploadNoteWithContent:(id)a0 toNotebook:(id)a1;
- (id)titleSearch;

@end
