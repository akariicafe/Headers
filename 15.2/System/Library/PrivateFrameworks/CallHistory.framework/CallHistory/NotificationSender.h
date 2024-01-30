@class NSString, NSDictionary;

@interface NotificationSender : NSObject

@property (readonly) NSString *name;
@property (retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)dealloc;

@end
