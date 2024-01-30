@interface APSMultiUserMode : NSObject

@property (readonly, nonatomic) BOOL isMultiUser;
@property (readonly, nonatomic) BOOL isLoggedInUser;

+ (id)sharedInstance;
+ (BOOL)_getIsCurrentlyLoggedIn;
+ (BOOL)_getMultiUserMode;

- (id)initWithIsMultiUserMode:(BOOL)a0 loggedInUser:(BOOL)a1;
- (BOOL)isMultiAndLoggedIn;

@end
