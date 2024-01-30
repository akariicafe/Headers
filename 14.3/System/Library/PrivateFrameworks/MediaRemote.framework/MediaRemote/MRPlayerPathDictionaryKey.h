@class MRPlayerPath;

@interface MRPlayerPathDictionaryKey : NSObject <NSCopying>

@property (readonly, nonatomic) MRPlayerPath *playerPath;

+ (id)dictionaryKeyWithPlayerPath:(id)a0;

- (id)initWithPlayerPath:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
