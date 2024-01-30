@class EKEvent;

@interface EKiMIPHandler : NSObject

@property (retain) EKEvent *event;

+ (id)emailsFromAttendees:(id)a0;
+ (BOOL)shouldSendEmailForEvent:(id)a0 withDiff:(id)a1;

- (id)initWithEvent:(id)a0;
- (id)attendees;
- (void).cxx_destruct;
- (BOOL)sendEmail;
- (id)attachmentData;
- (id)emailAttachmentName;
- (id)emailBody;
- (id)emailSubject;
- (id)iCalendarDocumentWithMethod:(int)a0;
- (int)icsMethod;

@end
