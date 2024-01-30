@interface EKiMIPUpdate : EKiMIPHandler

+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;

- (id)emailSubject;
- (id)attendees;
- (id)emailAttachmentName;
- (int)icsMethod;
- (id)emailBody;

@end
