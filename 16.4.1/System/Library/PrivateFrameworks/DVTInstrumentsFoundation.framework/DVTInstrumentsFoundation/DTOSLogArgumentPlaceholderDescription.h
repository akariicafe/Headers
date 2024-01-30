@class NSString;

@interface DTOSLogArgumentPlaceholderDescription : NSObject <NSCopying>

@property (readonly, nonatomic) long long placeholderKind;
@property (readonly, nonatomic) NSString *placeholderToken;
@property (readonly, nonatomic) NSString *placeholderKey;
@property (readonly, nonatomic) NSString *placeholderObjectValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithPlaceholderToken:(id)a0;

@end
