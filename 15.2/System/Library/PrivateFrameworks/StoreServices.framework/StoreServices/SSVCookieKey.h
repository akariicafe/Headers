@class NSNumber;

@interface SSVCookieKey : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *identifier;
@property (nonatomic) long long scope;

+ (id)keyWithIdentifier:(id)a0 scope:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
