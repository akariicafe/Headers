@class NSString;

@interface SeymourClient.SessionDarwinNotification : NSObject

@property (class, nonatomic, readonly) int sessionStatusToken;
@property (class, nonatomic, readonly) NSString *sessionUpdated;
@property (class, nonatomic, readonly) NSString *sessionMindAppRequirementConfirmation;

- (void).cxx_destruct;
- (id)init;

@end
