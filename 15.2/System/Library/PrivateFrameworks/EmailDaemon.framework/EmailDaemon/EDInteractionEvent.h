@class NSString, NSDictionary, NSDate;

@interface EDInteractionEvent : NSObject

@property (nonatomic) long long eventID;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) long long mailboxID;
@property (nonatomic) long long conversationID;
@property (nonatomic) long long messageIDHash;
@property (nonatomic) long long messagePersistentID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *data;

- (void).cxx_destruct;
- (id)debugDescription;

@end
