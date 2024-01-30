@class NSString, NSSet, NSArray, NSNumber, VSAccountAuthentication;

@interface VSApplicationControllerResponse : NSObject

@property (copy, nonatomic) NSString *authenticationScheme;
@property (copy, nonatomic) NSString *responseStatusCode;
@property (copy, nonatomic) NSString *responseString;
@property (copy, nonatomic) NSNumber *expectedAction;
@property (retain, nonatomic) VSAccountAuthentication *accountAuthentication;
@property (copy, nonatomic) NSSet *accountChannelIDs;
@property (copy, nonatomic) NSArray *subscriptionsToAdd;
@property (copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID;
@property (copy, nonatomic) NSArray *userAccounts;

- (id)description;
- (void).cxx_destruct;

@end
