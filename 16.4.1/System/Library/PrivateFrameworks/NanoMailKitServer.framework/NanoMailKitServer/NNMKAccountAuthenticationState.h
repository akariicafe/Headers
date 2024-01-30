@class NSString;

@interface NNMKAccountAuthenticationState : NSObject

@property (copy, nonatomic) NSString *accountId;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSString *emailAddressToken;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *subsectionId;

- (void).cxx_destruct;

@end
