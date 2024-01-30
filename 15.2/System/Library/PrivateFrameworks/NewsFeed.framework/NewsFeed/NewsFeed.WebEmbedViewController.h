@interface NewsFeed.WebEmbedViewController : UIViewController {
    void /* unknown type, empty encoding */ reuseIdentifier;
    void /* unknown type, empty encoding */ onReuse;
    void /* unknown type, empty encoding */ webLinkPresentingViewController;
    void /* unknown type, empty encoding */ contentFrame;
    void /* unknown type, empty encoding */ debugButton;
    void /* unknown type, empty encoding */ interactionProvider;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ contentFrameChanged;
    void /* unknown type, empty encoding */ embedURL;
    void /* unknown type, empty encoding */ dataFeedURL;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ sourceURL;
    void /* unknown type, empty encoding */ webContentViewController;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ errorProvider;
    void /* unknown type, empty encoding */ presentationManager;
    void /* unknown type, empty encoding */ configurationProvider;
    void /* unknown type, empty encoding */ pictureInPictureState;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ errorState;
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ errorView;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
}

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)handleTapWithRecognizer:(id)a0;

@end
