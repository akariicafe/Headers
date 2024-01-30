@interface UserProtectedConfig : NSObject

@property (nonatomic) int unlockEnabled;
@property (nonatomic) int identificationEnabled;
@property (nonatomic) int loginEnabled;
@property (nonatomic) int applePayEnabled;
@property (nonatomic) int attentionDetectionEnabled;

- (id)init;

@end
