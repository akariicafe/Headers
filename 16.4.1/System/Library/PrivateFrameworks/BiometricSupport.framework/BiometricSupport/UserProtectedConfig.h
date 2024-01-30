@interface UserProtectedConfig : NSObject

@property (nonatomic) int unlockEnabled;
@property (nonatomic) int identificationEnabled;
@property (nonatomic) int loginEnabled;
@property (nonatomic) int applePayEnabled;
@property (nonatomic) int attentionDetectionEnabled;
@property (nonatomic) int periocularMatchEnabled;

- (id)init;

@end
