@class NSString, NSUserActivity;

@interface CLKUserActivity : NSObject {
    NSUserActivity *_userActivity;
    NSString *_encodedUserActivity;
}

@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSString *encodedUserActivity;

- (id)initWithUserActivity:(id)a0;
- (void).cxx_destruct;
- (id)initWithEncodedUserActivity:(id)a0;

@end
