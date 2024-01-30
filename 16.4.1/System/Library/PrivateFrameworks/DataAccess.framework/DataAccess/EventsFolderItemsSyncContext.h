@interface EventsFolderItemsSyncContext : NSObject

@property (nonatomic) int calEventChangeId;
@property (nonatomic) int calRecurrenceChangeId;
@property (nonatomic) int calAlarmChangeId;
@property (nonatomic) int calAttendeeChangeId;
@property (nonatomic) int calAttachmentChangeId;
@property (nonatomic) int highestSequenceNumber;

@end
