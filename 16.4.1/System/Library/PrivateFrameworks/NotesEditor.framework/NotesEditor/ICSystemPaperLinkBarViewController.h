@interface ICSystemPaperLinkBarViewController : UIViewController {
    void /* unknown type, empty encoding */ linkController;
    void /* unknown type, empty encoding */ addLinkClient;
    void /* unknown type, empty encoding */ noteEditorViewController;
    void /* unknown type, empty encoding */ linkControllerDelegate;
    void /* unknown type, empty encoding */ attachmentWasAddedObservation;
    void /* unknown type, empty encoding */ attachmentWasDeletedObservation;
    void /* unknown type, empty encoding */ blurView;
    void /* unknown type, empty encoding */ linkDescriptionLabel;
    void /* unknown type, empty encoding */ addLinkButton;
    void /* unknown type, empty encoding */ lastFetchedFilteredLinks;
}

- (void)refresh;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)didTapAddLinkButtonWithButton:(id)a0;
- (id)initWithNoteEditorViewController:(id)a0;

@end
