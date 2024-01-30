@interface EKEventConferenceInformationDetailItem : EKEventTextDetailItem

+ (id)titleForCell;
+ (id /* block */)textFromEventBlock;
+ (id)moreButtonLabel;
+ (id)titleForExtendedViewController;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)textForExtendedViewController;
- (id)textForCopyAction;

@end
