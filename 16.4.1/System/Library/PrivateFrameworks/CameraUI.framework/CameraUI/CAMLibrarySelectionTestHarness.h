@class CAMLibrarySelectionController;

@interface CAMLibrarySelectionTestHarness : CAMPerformanceTestHarness

@property (readonly, nonatomic) CAMLibrarySelectionController *librarySelectionController;

- (void)startTesting;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0;
- (id)initWithTestName:(id)a0 librarySelectionController:(id)a1;

@end
