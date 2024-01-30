@protocol ICDeveloperTokenProvider;

@interface ICMusicKitRequestContext : ICStoreRequestContext <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _storeRequestPersonalizationStyle;
@property (readonly, nonatomic) long long personalizationStyle;
@property (readonly, nonatomic) id<ICDeveloperTokenProvider> developerTokenProvider;
@property (readonly, nonatomic) long long personalizationMethod;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithBlock:(id /* block */)a0;
- (void)setPersonalizationStyle:(long long)a0;
- (void)setPersonalizationMethod:(long long)a0;
- (void)setDeveloperTokenProvider:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
