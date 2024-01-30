@class NSString, NSData;

@interface CKDShareTokenMetadata : NSObject <NSCopying>

@property (retain, nonatomic) NSString *routingKey;
@property (retain, nonatomic) NSData *shortSharingTokenData;
@property (readonly, nonatomic) NSString *shortSharingToken;
@property (readonly, nonatomic) NSData *shortSharingTokenHashData;
@property (nonatomic) BOOL forceDSRefetch;
@property (retain, nonatomic) NSData *publicTokenData;
@property (retain, nonatomic) NSData *privateTokenData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
