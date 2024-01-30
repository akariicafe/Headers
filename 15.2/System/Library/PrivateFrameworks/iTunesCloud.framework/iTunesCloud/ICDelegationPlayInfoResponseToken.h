@class NSData, NSString, NSDate;

@interface ICDelegationPlayInfoResponseToken : NSObject

@property (copy, nonatomic) NSData *tokenData;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *storefrontIdentifier;

- (void).cxx_destruct;

@end
