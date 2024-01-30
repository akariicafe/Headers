@interface EmojiPoster.EmojiForegroundGridLayersViewController : UIViewController {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ emojiRenderer;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ layoutProvider;
    void /* unknown type, empty encoding */ numberOfRows;
    void /* unknown type, empty encoding */ numberOfItemsInRow;
    void /* unknown type, empty encoding */ emojiImageViews;
    void /* unknown type, empty encoding */ emojiImages;
    void /* unknown type, empty encoding */ wakeProgress;
    void /* unknown type, empty encoding */ unlockProgress;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
