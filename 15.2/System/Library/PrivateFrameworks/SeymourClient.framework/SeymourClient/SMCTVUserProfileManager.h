@protocol SMCTVUserProfile;

@interface SMCTVUserProfileManager : NSObject

@property (readonly, nonatomic) id<SMCTVUserProfile> selectedUserProfile;

+ (id)sharedInstance;

@end
