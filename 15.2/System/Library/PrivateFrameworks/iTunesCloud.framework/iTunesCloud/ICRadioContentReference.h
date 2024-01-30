@class NSString, NSDictionary;

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *playbackAuthorizationToken;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *matchDictionary;
@property (readonly, copy, nonatomic) NSDictionary *rawContentDictionary;

+ (id)storeItemWithIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
