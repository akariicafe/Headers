@class NSString, NSUserActivity;

@interface CLKUserActivity : NSObject {
    NSUserActivity *_userActivity;
    NSString *_encodedUserActivity;
}

@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSString *encodedUserActivity;

- (void).cxx_destruct;
- (id)initWithUserActivity:(id)a0;
- (id)initWithEncodedUserActivity:(id)a0;

@end
