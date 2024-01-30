@class NSArray;

@interface SFAuthenticateAccountResult : NSObject

@property (readonly, nonatomic) NSArray *authenticatedAccounts;
@property (readonly, nonatomic) NSArray *knownHomeUserIdentifiers;
@property (readonly, nonatomic) BOOL isVoiceProfileAvailable;

- (void).cxx_destruct;
- (id)initWithAuthenticatedAccounts:(id)a0 knownHomeUserIdentifiers:(id)a1 isVoiceProfileAvailable:(BOOL)a2;

@end
