@class NSArray;

@interface PUXSuggestLessPeopleSelectionViewController : UIViewController <PXSuggestLessPeopleSelectionViewController> {
    void /* unknown type, empty encoding */ people;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ completionHandler;
}

@property (nonatomic, copy) NSArray *people;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithPeople:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupSelectionView;

@end
