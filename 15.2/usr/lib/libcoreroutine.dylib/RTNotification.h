@class NSString;

@interface RTNotification : NSObject

@property (readonly, nonatomic) NSString *name;

+ (id)notificationName;

- (id)init;

@end
