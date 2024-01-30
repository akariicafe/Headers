@interface TSWPTopicNumberEntry : NSObject <NSCopying>

@property (nonatomic) unsigned long long charIndex;
@property (readonly, nonatomic) unsigned long long number;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithNumber:(unsigned long long)a0 charIndex:(unsigned long long)a1;

@end
