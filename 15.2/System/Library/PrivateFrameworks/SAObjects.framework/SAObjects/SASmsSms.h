@class NSDate, NSString, NSArray, NSURL, SAPersonAttribute, SAAppInfo, NSNumber;

@interface SASmsSms : SADomainObject

@property (retain, nonatomic) SAAppInfo *appInfo;
@property (copy, nonatomic) NSURL *attachment;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSString *chatIdentifier;
@property (copy, nonatomic) NSDate *dateLastMessageReadInThread;
@property (copy, nonatomic) NSDate *dateReadingStarted;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSString *effect;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNameId;
@property (nonatomic) BOOL hasGroupName;
@property (copy, nonatomic) NSNumber *isAudioMessage;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSArray *msgRecipients;
@property (retain, nonatomic) SAPersonAttribute *msgSender;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *recipients;
@property (retain, nonatomic) SASmsSms *referencedMessage;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timezoneId;

+ (id)sms;
+ (id)smsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
