@class NSString, NSError;

@interface ICMusicKitTokensResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *developerToken;
@property (readonly, copy, nonatomic) NSString *userToken;
@property (readonly, copy, nonatomic) NSError *userTokenFetchingError;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_descriptionForDebugging:(BOOL)a0;
- (id)_descriptionOfToken:(id)a0 forDebugging:(BOOL)a1;
- (id)initWithDeveloperToken:(id)a0 userToken:(id)a1 userTokenFetchingError:(id)a2;

@end
