@interface TSCHStyleSemanticTag : NSObject <NSCopying>

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) BOOL isSeries;
@property (readonly, nonatomic) BOOL isReferenceLine;

+ (id)styleSemanticTagWithType:(int)a0 index:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSeries;
- (Class)styleClass;
- (id)initWithType:(int)a0 index:(unsigned long long)a1;
- (BOOL)isReferenceLine;

@end
