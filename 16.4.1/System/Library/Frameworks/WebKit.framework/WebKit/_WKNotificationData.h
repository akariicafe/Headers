@class NSString, NSDictionary;

@interface _WKNotificationData : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *origin;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void)dealloc;
- (id)initWithCoreData:(const void *)a0 dataStore:(id)a1;

@end
