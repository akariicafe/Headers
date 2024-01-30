@class NSString, NSDictionary, NSArray, NSDate;

@interface SSRemoteNotification : NSObject <SSXPCCoding> {
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) NSDictionary *notificationUserInfo;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSString *alertBodyString;
@property (readonly, nonatomic) NSString *alertCancelString;
@property (readonly, nonatomic) NSString *alertOKString;
@property (readonly, nonatomic) NSString *alertTitleString;
@property (readonly, nonatomic) id badgeValue;
@property (readonly, nonatomic) NSString *soundFileName;
@property (readonly, nonatomic) BOOL explicitContent;
@property (readonly, nonatomic) NSString *artworkUrl;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSString *tapUrl;
@property (readonly, nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueForKey:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)_valueForAlertKey:(id)a0;
- (id)_valueForAPSKey:(id)a0;
- (id)initWithNotificationUserInfo:(id)a0;
- (void)dealloc;

@end
