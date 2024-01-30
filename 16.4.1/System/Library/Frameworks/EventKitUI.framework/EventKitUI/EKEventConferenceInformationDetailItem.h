@interface EKEventConferenceInformationDetailItem : EKEventTextDetailItem

+ (id)moreButtonLabel;
+ (id /* block */)textFromEventBlock;
+ (id)titleForCell;
+ (id)titleForExtendedViewController;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)textForExtendedViewController;
- (id)textForCopyAction;

@end
