@interface EKiMIPUpdate : EKiMIPHandler

+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;

- (id)attendees;
- (id)emailAttachmentName;
- (id)emailBody;
- (id)emailSubject;
- (int)icsMethod;

@end
