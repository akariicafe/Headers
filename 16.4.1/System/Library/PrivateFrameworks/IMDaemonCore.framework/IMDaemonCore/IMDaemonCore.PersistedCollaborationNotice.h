@class NSString, NSData, NSDate;

@interface IMDaemonCore.PersistedCollaborationNotice : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDate *dateViewed;
@property (nonatomic, copy) NSString *guidString;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *senderHandle;
@property (nonatomic, copy) NSString *url;
@property (nonatomic) short version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
