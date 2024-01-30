@class NSPredicate;
@protocol WDMedicalRecordSearchResultViewControllerDelegate;

@interface WDMedicalRecordSearchResultViewController : WDMedicalRecordTimelineViewController

@property (weak, nonatomic) id<WDMedicalRecordSearchResultViewControllerDelegate> delegate;
@property (retain, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
