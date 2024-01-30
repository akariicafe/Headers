@class NSArray, NSString, NSURL, NSDate, SAPersonAttribute, NSNumber;

@interface SAEmailEmail : SADomainObject

@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSDate *dateSent;
@property (retain, nonatomic) SAPersonAttribute *fromEmail;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *messagePreview;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *receivingAddresses;
@property (copy, nonatomic) NSArray *recipientsBcc;
@property (copy, nonatomic) NSArray *recipientsCc;
@property (copy, nonatomic) NSArray *recipientsTo;
@property (copy, nonatomic) NSURL *referenceId;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *type;

+ (id)email;
+ (id)emailWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
