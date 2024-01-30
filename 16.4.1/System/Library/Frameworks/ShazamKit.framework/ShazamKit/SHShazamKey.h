@class NSString;

@interface SHShazamKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *validatedKey;

- (id)initWithKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isShazamKeyValid:(id)a0;

@end
