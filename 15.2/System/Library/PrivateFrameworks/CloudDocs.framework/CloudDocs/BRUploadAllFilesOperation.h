@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation {
    BRContainer *_container;
}

@property (copy) id /* block */ uploadAllFilesCompletion;

- (id)initWithContainer:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)init;

@end
