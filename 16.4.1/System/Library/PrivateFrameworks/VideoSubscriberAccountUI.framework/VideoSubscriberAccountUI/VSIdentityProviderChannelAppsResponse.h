@class NSArray, NSDictionary;

@interface VSIdentityProviderChannelAppsResponse : NSObject

@property (copy, nonatomic) NSArray *allApps;
@property (copy, nonatomic) NSDictionary *appsByChannelID;

- (id)init;
- (void).cxx_destruct;

@end
