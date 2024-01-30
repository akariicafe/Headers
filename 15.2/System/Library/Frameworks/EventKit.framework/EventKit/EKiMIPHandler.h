@class EKEvent;

@interface EKiMIPHandler : NSObject

@property (retain) EKEvent *event;

+ (id)emailsFromAttendees:(id)a0;
+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;

- (id)initWithEvent:(id)a0;
- (id)emailSubject;
- (id)attendees;
- (BOOL)sendEmail;
- (id)iCalendarDocumentWithMethod:(int)a0;
- (id)emailAttachmentName;
- (id)attachmentData;
- (void).cxx_destruct;
- (int)icsMethod;
- (id)emailBody;

@end
