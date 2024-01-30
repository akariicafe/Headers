@class NSString;

@interface SHShazamKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *validatedKey;

- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isShazamKeyValid:(id)a0;

@end
