@interface _PSCNAutocompleteFeedbackProcessingTask : NSObject

+ (void)runOverImplicit;
+ (void)runOverExplicit;
+ (id)bookmarkFileNameForImplicit:(BOOL)a0;
+ (id)bundleIDsToProcess;
+ (id)loadBookmarkTimeOverImplicit:(BOOL)a0 from:(id)a1;
+ (void)persistBookmarkTime:(id)a0 overImplicit:(BOOL)a1 to:(id)a2;
+ (void)runWithInferredEnterAndExit:(BOOL)a0 overImplicit:(BOOL)a1 eventFilter:(id /* block */)a2;
+ (id)sourceBundleIDsToIgnore;

- (void)execute;

@end
