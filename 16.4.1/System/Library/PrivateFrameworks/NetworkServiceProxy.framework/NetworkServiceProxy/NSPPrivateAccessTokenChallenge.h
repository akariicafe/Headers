@class NSString, NSData, NSArray;

@interface NSPPrivateAccessTokenChallenge : NSObject {
    unsigned short _tokenType;
    NSString *_issuerName;
    NSData *_redemptionNonce;
    NSString *_originName;
    NSArray *_originNames;
    NSString *_originInfo;
    NSData *_challengeData;
}

@property (readonly) unsigned short tokenType;
@property (readonly) NSString *issuerName;
@property (readonly) NSData *redemptionNonce;
@property (readonly) NSString *originName;
@property (readonly) NSArray *originNames;
@property (readonly) BOOL isSupportedTokenType;
@property (readonly) BOOL typeRequiresOriginName;
@property (readonly) BOOL typeRequiresRedemptionNonce;
@property (readonly) BOOL typeHasAllowedOriginList;

+ (id)originNameKeyAttributeName;
+ (id)tokenKeyAttributeName;
+ (id)httpAuthenticationScheme;
+ (id)challengeAttributeName;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
