@interface EmojiPoster.BackgroundViewController : UIViewController {
    void /* unknown type, empty encoding */ usesDimmingLayer;
    void /* unknown type, empty encoding */ backgroundConfiguration;
    void /* unknown type, empty encoding */ backgroundIndex;
    void /* unknown type, empty encoding */ dimmingLayer;
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
