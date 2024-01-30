@interface PurplePageMemoryTestRunner : PurplePageLoadTestRunner

- (id)initWithTestName:(id)a0 browserController:(id)a1;
- (void)_updatePageLoad:(id)a0 stats:(id)a1;
- (void)collectPPTResults;

@end
