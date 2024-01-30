@class NSArray, NSData;

@interface EKiMIPCancel : EKiMIPHandler {
    NSArray *_attendees;
    NSData *_attachmentData;
}

+ (BOOL)shouldSendEmailForEvent:(id)a0 removedAttendees:(id *)a1;

- (id)emailSubject;
- (id)attendees;
- (id)emailAttachmentName;
- (id)attachmentData;
- (void).cxx_destruct;
- (int)icsMethod;
- (id)emailBody;
- (id)initWithEvent:(id)a0 andAttendees:(id)a1;

@end
