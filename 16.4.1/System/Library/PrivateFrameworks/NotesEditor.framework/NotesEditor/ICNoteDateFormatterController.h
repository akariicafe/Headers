@class ICNote, NSDateFormatter, NSDate;
@protocol ICNoteDateFormatterControllerDelegate;

@interface ICNoteDateFormatterController : NSObject

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateFormatter *shortDateFormatter;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long currentSortType;
@property (nonatomic) BOOL didManuallyChangeDateType;
@property (nonatomic) BOOL showAlternateDateView;
@property (readonly, nonatomic) BOOL shouldShowDateModified;
@property (nonatomic) BOOL shouldShowSharedNoteTitle;
@property (nonatomic) BOOL iconHidden;
@property (weak, nonatomic) id<ICNoteDateFormatterControllerDelegate> delegate;
@property (weak, nonatomic) ICNote *note;

- (void)setUp;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)updateDate;
- (id)dateStringForDate:(id)a0 dateFormatter:(id)a1;
- (void)noteDecryptedStatusDidChange:(id)a0;
- (void)timeFormatChanged:(id)a0;
- (void)toggleVisibleDateType;
- (void)updateDateLabelAccessibilityHint;
- (void)updateLockIcon;

@end
