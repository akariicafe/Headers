@class NSArray;

@interface SeymourUI.TVFilterOptionsViewController : UIViewController {
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ settlingTimer;
    void /* unknown type, empty encoding */ timerProvider;
    void /* unknown type, empty encoding */ metricPublishingDelegate;
    void /* unknown type, empty encoding */ titleLabel;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)menuButtonTapped;

@end
