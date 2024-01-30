@class NSString;

@interface SeymourClient.SessionDarwinNotification : NSObject

@property (class, nonatomic, readonly) int sessionStatusToken;
@property (class, nonatomic, readonly) NSString *sessionUpdated;

- (id)init;
- (void).cxx_destruct;

@end
