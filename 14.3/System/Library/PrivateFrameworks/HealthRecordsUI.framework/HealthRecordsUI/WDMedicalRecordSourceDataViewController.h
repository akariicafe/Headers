@class HRProfile, UITextView, HKMedicalRecord, UIBarButtonItem;

@interface WDMedicalRecordSourceDataViewController : HKViewController

@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord;
@property (readonly, nonatomic) HRProfile *profile;
@property (readonly, nonatomic) UITextView *sourceView;
@property (nonatomic) BOOL hasFetchedSourceString;
@property (retain, nonatomic) UIBarButtonItem *shareItem;

- (id)initWithProfile:(id)a0 medicalRecord:(id)a1;
- (void)_tapToRadar:(id)a0;
- (void).cxx_destruct;
- (void)share:(id)a0;
- (void)loadView;
- (void)_fetchAndDisplaySourceStringIfNecessary;
- (void)displaySourceString:(id)a0;
- (void)viewWillAppear:(BOOL)a0;

@end
