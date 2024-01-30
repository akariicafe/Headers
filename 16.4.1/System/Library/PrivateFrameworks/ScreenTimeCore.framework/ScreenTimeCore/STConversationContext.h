@class NSDictionary, NSArray;

@interface STConversationContext : NSObject

@property BOOL allowedByScreenTime;
@property (copy) NSDictionary *allowedByContactsHandle;
@property BOOL applicationCurrentlyLimited;
@property BOOL shouldBeAllowedByScreenTimeWhenLimited;
@property BOOL shouldBeAllowedDuringGeneralScreenTime;
@property (copy) NSDictionary *contactsByHandle;
@property (copy) NSArray *whitelistedHandles;
@property unsigned long long currentApplicationState;
@property BOOL emergencyModeEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)updateForThirdPartyApplicationState:(long long)a0;
- (void)updateShouldBeAllowedDuringGeneralScreenTime:(BOOL)a0 shouldBeAllowedByScreenTimeWhenLimited:(BOOL)a1 currentApplicationState:(unsigned long long)a2 emergencyModeEnabled:(BOOL)a3;

@end
