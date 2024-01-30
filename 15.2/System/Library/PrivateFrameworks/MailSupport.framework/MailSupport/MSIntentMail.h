@class NSArray, NSString, INPerson, NSDateComponents;

@interface MSIntentMail : INObject

@property (copy, nonatomic) INPerson *sender;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSDateComponents *dateSent;

@end
