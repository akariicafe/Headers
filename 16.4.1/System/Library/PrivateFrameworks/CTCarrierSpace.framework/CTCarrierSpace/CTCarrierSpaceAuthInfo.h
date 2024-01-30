@class NSData, NSDate;

@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *accessToken;
@property (retain, nonatomic) NSData *refreshToken;
@property (retain, nonatomic) NSDate *expiresAt;
@property (nonatomic) BOOL shouldCache;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
