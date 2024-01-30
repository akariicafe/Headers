@class NSArray;

@interface PUXSuggestLessPeopleOptionSelectionViewController : UIViewController <PXSuggestLessPeopleOptionSelectionViewController> {
    void /* unknown type, empty encoding */ people;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ completionHandler;
}

@property (nonatomic, copy) NSArray *people;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithPeople:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupOptionSelectionView;

@end
