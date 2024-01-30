@class NSDate, NSMutableIndexSet, NSArray, UITextView, NSMutableDictionary, OSLogEventStreamBase, NSDateFormatter, NSMutableAttributedString, UIActivityIndicatorView, NSMutableArray;

@interface PXLogsViewController : UIViewController {
    NSArray *_subsystemsAndCategories;
    NSDate *_startDate;
    UITextView *_textView;
    UIActivityIndicatorView *_spinnerView;
    OSLogEventStreamBase *_eventStream;
    NSMutableAttributedString *_fullAttributedString;
    BOOL _hasScheduledTextViewUpdate;
    NSMutableArray *_compactLogs;
    NSMutableArray *_expandedLogs;
    NSMutableIndexSet *_isExpanded;
    NSMutableDictionary *_substitutionByObjectRepresentation;
    NSMutableDictionary *_nextAvailableIndexByClassName;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubsystemsAndCategories:(id)a0 startDate:(id)a1;
- (id)initWithSubsystem:(id)a0 category:(id)a1 startDate:(id)a2;
- (id)initLiveWithSubsystemsAndCategories:(id)a0;
- (id)initLiveWithSubsystem:(id)a0 category:(id)a1;
- (void)prepareDiskStore;
- (void)prepareLiveStore;
- (id)subsystemsAndCategoriesPredicateWithSubsystemsAndCategories:(id)a0;
- (void)setupEventStream:(id)a0;
- (void)removeSpinner;
- (void)logAttributedString:(id)a0;
- (void)toggleModeForStringIndex:(unsigned long long)a0;
- (id)substitutionForObjectRepresentation:(id)a0;
- (BOOL)isCollectionRepresentation:(id)a0;
- (id)substitutionForCollectionRepresentation:(id)a0 attributes:(id)a1;

@end
