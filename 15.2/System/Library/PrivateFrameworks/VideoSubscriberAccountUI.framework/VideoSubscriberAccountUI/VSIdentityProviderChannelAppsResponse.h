@class NSArray, NSDictionary;

@interface VSIdentityProviderChannelAppsResponse : NSObject

@property (copy, nonatomic) NSArray *allApps;
@property (copy, nonatomic) NSDictionary *appsByChannelID;

- (void).cxx_destruct;
- (id)init;

@end
