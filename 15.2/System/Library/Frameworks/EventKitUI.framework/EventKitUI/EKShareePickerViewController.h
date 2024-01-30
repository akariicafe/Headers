@class NSArray, NSString, EKCalendarShareePicker;
@protocol EKShareePickerViewControllerDelegate;

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate, EKUIManagedViewController> {
    EKCalendarShareePicker *_picker;
}

@property (readonly, copy, nonatomic) NSArray *sharees;
@property (weak, nonatomic) id<EKShareePickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)add;
- (void)setSharees:(id)a0;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canManagePresentationStyle;
- (void).cxx_destruct;
- (BOOL)wantsManagement;
- (void)cancel;
- (void)setSearchAccountID:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calendar:(id)a1;
- (id)_createShareeFromRecipient:(id)a0;
- (id)_createRecipientFromSharee:(id)a0;
- (id)_shareeFromRecipient:(id)a0;
- (id)_recipientFromSharee:(id)a0;
- (void)eventAttendeePicker:(id)a0 cacheValidationStatus:(unsigned long long)a1 forAddress:(id)a2;
- (unsigned long long)eventAttendeePicker:(id)a0 getValidationStatusForAddress:(id)a1;

@end
