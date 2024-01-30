@class SCLSchoolModeManager;

@interface SCLWatchServer : NSObject

@property (readonly, nonatomic) SCLSchoolModeManager *schoolModeManager;

+ (id)sharedWatchServer;

- (void)run;
- (void).cxx_destruct;

@end
