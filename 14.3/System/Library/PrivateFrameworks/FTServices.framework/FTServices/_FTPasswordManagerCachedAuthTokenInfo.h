@class NSString, NSDictionary, NSNumber;

@interface _FTPasswordManagerCachedAuthTokenInfo : NSObject

@property (retain, nonatomic) NSString *profileID;
@property (retain, nonatomic) NSString *selfID;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSDictionary *alertInfo;
@property (retain, nonatomic) NSNumber *status;

- (void).cxx_destruct;

@end
