@class NSString;

@interface MessageInboxEntry : NSManagedObject

@property (copy, nonatomic) NSString *contactID;
@property (copy, nonatomic) NSString *friendCode;
@property (copy, nonatomic) NSString *senderAlias;
@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *value;

+ (id)fetchRequest;

@end
