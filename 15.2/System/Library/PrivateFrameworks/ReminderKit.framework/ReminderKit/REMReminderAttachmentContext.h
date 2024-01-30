@class NSArray, REMReminder;

@interface REMReminderAttachmentContext : NSObject

@property (retain, nonatomic) REMReminder *reminder;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *fileAttachments;
@property (readonly, nonatomic) NSArray *imageAttachments;
@property (readonly, nonatomic) NSArray *urlAttachments;

- (void).cxx_destruct;
- (id)attachmentsOfClass:(Class)a0;
- (id)initWithReminder:(id)a0;

@end
