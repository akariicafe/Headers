@interface WFEvernoteAppendAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)performSearch:(id)a0 inNotebook:(id)a1 maxResults:(unsigned long long)a2;
- (void)uploadNoteWithContent:(id)a0 toNotebook:(id)a1;
- (id)titleSearch;

@end
