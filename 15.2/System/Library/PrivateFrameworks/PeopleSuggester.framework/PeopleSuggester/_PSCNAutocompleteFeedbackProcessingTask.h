@interface _PSCNAutocompleteFeedbackProcessingTask : NSObject

+ (id)bookmarkFileNameForImplicit:(BOOL)a0;
+ (id)loadBookmarkTimeOverImplicit:(BOOL)a0 from:(id)a1;
+ (id)bundleIDsToProcess;
+ (id)sourceBundleIDsToIgnore;
+ (void)persistBookmarkTime:(id)a0 overImplicit:(BOOL)a1 to:(id)a2;
+ (void)runWithInferredEnterAndExit:(BOOL)a0 overImplicit:(BOOL)a1 eventFilter:(id /* block */)a2;
+ (void)runOverExplicit;
+ (void)runOverImplicit;

- (void)execute;

@end
