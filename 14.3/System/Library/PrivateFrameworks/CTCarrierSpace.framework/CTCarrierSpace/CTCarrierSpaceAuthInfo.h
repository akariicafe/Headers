@class NSData, NSDate;

@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *accessToken;
@property (retain, nonatomic) NSData *refreshToken;
@property (retain, nonatomic) NSDate *expiresAt;
@property (nonatomic) BOOL shouldCache;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
