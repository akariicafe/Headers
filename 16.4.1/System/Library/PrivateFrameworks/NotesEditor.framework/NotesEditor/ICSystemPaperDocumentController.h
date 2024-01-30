@interface ICSystemPaperDocumentController : NSObject {
    void /* unknown type, empty encoding */ presenters;
}

@property (class, nonatomic, readonly) ICSystemPaperDocumentController *sharedInstance;

- (void)addPresenter:(id)a0;
- (id)init;
- (void)removePresenter:(id)a0;
- (void).cxx_destruct;
- (id)presenterForPaperIdentifier:(id)a0;

@end
