@interface NewsUI2.TagFeedViewController : UIViewController <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ feedDescriptor;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ refreshStateMachine;
    void /* unknown type, empty encoding */ refreshControl;
    void /* unknown type, empty encoding */ sharingActivityProviderFactory;
}

- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didPullToRefreshWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
