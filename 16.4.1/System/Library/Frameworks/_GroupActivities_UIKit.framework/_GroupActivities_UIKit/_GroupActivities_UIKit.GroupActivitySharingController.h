@class NSString;

@interface _GroupActivities_UIKit.GroupActivitySharingController : UIViewController {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ _resultValue;
}

@property (nonatomic, copy) NSString *shareSheetSessionID;
@property (nonatomic) BOOL startStagedActivity;
@property (nonatomic) long long modalPresentationStyle;

- (void)registerWithResultHandler:(id /* block */)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithItemProvider:(id)a0;

@end
