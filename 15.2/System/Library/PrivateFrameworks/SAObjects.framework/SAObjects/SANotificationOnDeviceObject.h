@class NSString, NSData;

@interface SANotificationOnDeviceObject : SANotificationObject

@property (copy, nonatomic) NSString *announcementType;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSData *request;
@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
