@class NSString, NSDictionary;

@interface NotificationSender : NSObject

@property (readonly) NSString *name;
@property (retain) NSDictionary *userInfo;

- (id)initWithName:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
