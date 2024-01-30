@class NSString, ICLibraryAuthServiceClientTokenIdentifier, NSDate;

@interface ICLibraryAuthServiceClientTokenResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, nonatomic) long long generatedAtMillis;
@property (readonly, nonatomic) long long timeToLiveMillis;
@property (readonly, nonatomic) long long lifespanMillis;
@property (readonly, copy, nonatomic) ICLibraryAuthServiceClientTokenIdentifier *tokenIdentitifer;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isExpired;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
