@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {
    BRContainer *_container;
}

@property (copy) id /* block */ uploadAllFilesCompletion;

- (id)initWithContainer:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
